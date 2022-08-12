// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/ConfigureVPNConnection.cpp"

#include "MockVPNActor.h"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

TEST_CASE( "cmd-configurevpn - throws if no actor" )
{
    CHECK_THROWS_AS( Command::ConfigureVPNConnection( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-configurevpn - can construct with actor" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::ConfigureVPNConnection config( actor );
}

TEST_CASE( "cmd-configurevpn - will trigger action with Run" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::ConfigureVPNConnection config( actor );
    std::string argument{ R"({ "Name": "testCOnfig", "VPNconfig": "VGVzdENvbnRlbnQ"})" };
    std::string response;

    SUBCASE( "Actor returns true" )
    {
        auto retVal = config.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->ConfigureVPNCalled );
        CHECK( actor->ConfigureVPNName == "testCOnfig" );
        CHECK( actor->ConfigureVPNConfig == "TestContent" );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "VPNConfigurationChanged" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }

    SUBCASE( "Actor returns false" )
    {
        actor->ConfigureVPNReturn = false;

        auto retVal = config.Run( argument, response );
        CHECK( retVal == 0 );
        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "VPNConfigurationChanged" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( !result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }
}

TEST_CASE( "cmd-configurevpn - invalid arguments will trigger error" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::ConfigureVPNConnection config( actor );
    std::string response;
    int retVal{ -1 };

    SUBCASE( "Missing name" )
    {
        std::string argument{ R"({ "VPNconfig": "VGVzdENvbnRlbnQ"})" };
        retVal = config.Run( argument, response );
    }
    SUBCASE( "Missing config" )
    {
        std::string argument{ R"({ "Name": "validName"})" };
        retVal = config.Run( argument, response );
    }
    SUBCASE( "invalid name - space" )
    {
        std::string argument{ R"({ "Name": "test cOnfig", "VPNconfig": "VGVzdENvbnRlbnQ"})" };
        retVal = config.Run( argument, response );
    }
    SUBCASE( "invalid name - special chars" )
    {
        std::string argument{ R"({ "Name": "some!strange^chars", "VPNconfig": "VGVzdENvbnRlbnQ"})" };
        retVal = config.Run( argument, response );
    }
    SUBCASE( "invalid name - invalid unicode" )
    {
        std::string argument{ R"({ "Name":")"
                              "\xc3\x28"
                              R"(", "VPNconfig": "VGVzdENvbnRlbnQ"})" };
        retVal = config.Run( argument, response );
    }
    SUBCASE( "invalid config - invalid base64" )
    {
        std::string argument{ R"({ "Name": "testcOnfig", "VPNconfig": "jkjsdk!jkfj====="})" };
        retVal = config.Run( argument, response );
    }
    CHECK( retVal == 0 );
    CHECK( !actor->ConfigureVPNCalled );
    rapidjson::Document JsonDomObject;
    JsonDomObject.Parse( response );
    REQUIRE( JsonDomObject.IsObject() );
    auto result = JsonDomObject.FindMember( "VPNConfigurationChanged" );
    REQUIRE( result != JsonDomObject.MemberEnd() );
    REQUIRE( result->value.IsBool() );
    REQUIRE( !result->value.GetBool() );
}
