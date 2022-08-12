// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/AddPortForwarding.cpp"

#include "MockPortForwardingActor.h"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

TEST_CASE( "cmd-addportforwarding - throws if no actor" )
{
    CHECK_THROWS_AS( Command::AddPortForwarding( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-addportforwarding - can construct with actor" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::AddPortForwarding add( actor );
}

TEST_CASE( "cmd-addportforwarding - will trigger action with Run" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::AddPortForwarding add( actor );
    std::string argument{
            R"({ "Name": "testname", "SourceIP": "someIp", "SourcePort": "13345", "DestinationIP": "someOtherIp", "DestinationPort": "30243" })" };
    std::string response;

    SUBCASE( "Actor returns true" )
    {
        auto retVal = add.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->RedirectConfig.DestinationIP == "someOtherIp" );
        CHECK( actor->RedirectConfig.DestinationPort == "30243" );
        CHECK( actor->RedirectConfig.SourcePort == "13345" );
        // SourceIP is ignored and not forwarded to actor
        CHECK( actor->RedirectConfig.Name == "testname" );
        CHECK( actor->AddRedirectCalled );
        CHECK( actor->ReloadFirewallCalled );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "PortForwardingActive" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }

    SUBCASE( "Actor returns false" )
    {
        actor->AddRedirectReturn = false;
        auto retVal              = add.Run( argument, response );
        CHECK( retVal == 0 );
        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "PortForwardingActive" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( !result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }
}

TEST_CASE( "cmd-addportforwarding - invalid arguments will trigger error" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::AddPortForwarding add( actor );
    std::string response;
    int retVal{ -1 };

    SUBCASE( "Missing name" )
    {
        std::string argument{
                R"({ "SourceIP": "someIp", "SourcePort": "13345", "DestinationIP": "someOtherIp", "DestinationPort": "30243" })" };
        retVal = add.Run( argument, response );
    }
    SUBCASE( "Missing source port" )
    {
        std::string argument{
                R"({ "Name": "testname", "SourceIP": "someIp", "DestinationIP": "someOtherIp", "DestinationPort": "30243" })" };
        retVal = add.Run( argument, response );
    }
    SUBCASE( "Missing destination port" )
    {
        std::string argument{
                R"({ "Name": "testname", "SourceIP": "someIp", "SourcePort": "13345", "DestinationIP": "someOtherIp" })" };
        retVal = add.Run( argument, response );
    }
    SUBCASE( "Missing destination ip" )
    {
        std::string argument{
                R"({ "Name": "testname", "SourceIP": "someIp", "SourcePort": "13345", "DestinationPort": "30243" })" };
        retVal = add.Run( argument, response );
    }
    SUBCASE( "Invalid JSON" )
    {
        std::string argument{ R"({ "Name": "testname", })" };
        retVal = add.Run( argument, response );
    }

    CHECK( retVal == 0 );
    CHECK( !actor->AddRedirectCalled );
    CHECK( !actor->ReloadFirewallCalled );
    rapidjson::Document JsonDomObject;
    JsonDomObject.Parse( response );
    REQUIRE( JsonDomObject.IsObject() );
    auto result = JsonDomObject.FindMember( "PortForwardingActive" );
    REQUIRE( result != JsonDomObject.MemberEnd() );
    REQUIRE( result->value.IsBool() );
    REQUIRE( !result->value.GetBool() );
}
