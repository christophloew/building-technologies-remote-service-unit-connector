// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/RemovePortForwarding.cpp"

#include "MockPortForwardingActor.h"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

TEST_CASE( "cmd-removeportforwarding - throws if no actor" )
{
    CHECK_THROWS_AS( Command::RemovePortForwarding( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-removeportforwarding - can construct with actor" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::RemovePortForwarding remove( actor );
}

TEST_CASE( "cmd-removeportforwarding - will trigger action with Run" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::RemovePortForwarding remove( actor );
    std::string argument{ R"("testname")" };
    std::string response;

    SUBCASE( "Actor returns true" )
    {
        auto retVal = remove.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->DeleteRedirectName == "testname" );
        CHECK( actor->DeleteRedirectCalled );
        CHECK( actor->ReloadFirewallCalled );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "PortForwardingRemoved" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }

    SUBCASE( "Actor returns false" )
    {
        actor->DeleteRedirectReturn = false;

        auto retVal = remove.Run( argument, response );
        CHECK( retVal == 0 );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "PortForwardingRemoved" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( !result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }
}

TEST_CASE( "cmd-removeportforwarding - invalid arguments will trigger error" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::RemovePortForwarding remove( actor );
    std::string response;
    int retVal{ -1 };

    SUBCASE( "Missing name" )
    {
        std::string argument{ R"()" };
        retVal = remove.Run( argument, response );
    }
    CHECK( !actor->DeleteRedirectCalled );
    CHECK( !actor->ReloadFirewallCalled );

    CHECK( retVal == 0 );
    rapidjson::Document JsonDomObject;
    JsonDomObject.Parse( response );
    REQUIRE( JsonDomObject.IsObject() );
    auto result = JsonDomObject.FindMember( "PortForwardingRemoved" );
    REQUIRE( result != JsonDomObject.MemberEnd() );
    REQUIRE( result->value.IsBool() );
    REQUIRE( !result->value.GetBool() );
    auto message = JsonDomObject.FindMember( "Message" );
    CHECK( message != JsonDomObject.MemberEnd() );
}
