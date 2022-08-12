// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/StopVPNConnection.cpp"

#include "MockVPNActor.h"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

TEST_CASE( "cmd-stopvpn - throws if no actor" )
{
    CHECK_THROWS_AS( Command::StopVPNConnection( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-stopvpn - can construct with actor" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::StopVPNConnection stop( actor );
}

TEST_CASE( "cmd-stopvpn - will trigger action with Run" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::StopVPNConnection stop( actor );
    std::string argument{ R"("vpnName")" };
    std::string response;

    SUBCASE( "Actor returns Disconnected" )
    {
        auto retVal = stop.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->StopVPNName == "vpnName" );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "ConnectionClosed" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }

    SUBCASE( "Actor returns AlreadyStopped" )
    {
        actor->StopVPNReturn = Command::IVPNActor::ConnectionStatusVPN::AlreadyStopped;

        auto retVal = stop.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->StopVPNName == "vpnName" );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "ConnectionClosed" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }

    SUBCASE( "Actor returns Error" )
    {
        actor->StopVPNReturn = Command::IVPNActor::ConnectionStatusVPN::Error;

        auto retVal = stop.Run( argument, response );
        CHECK( retVal == 0 );
        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "ConnectionClosed" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( !result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }

    SUBCASE( "Actor returns NoConfiguration" )
    {
        actor->StopVPNReturn = Command::IVPNActor::ConnectionStatusVPN::NoConfiguration;

        auto retVal = stop.Run( argument, response );
        CHECK( retVal == 0 );
        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "ConnectionClosed" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( !result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }
}

TEST_CASE( "cmd-stopvpn - invalid arguments will trigger error" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::StopVPNConnection stop( actor );
    std::string response;
    int retVal{ -1 };

    SUBCASE( "Missing name" )
    {
        std::string argument{ R"()" };
        retVal = stop.Run( argument, response );
    }
    SUBCASE( "invalid name - space" )
    {
        std::string argument{ R"("some name with space")" };
        retVal = stop.Run( argument, response );
    }
    SUBCASE( "invalid name - special chars" )
    {
        std::string argument{ R"("some!strange^chars\n")" };
        retVal = stop.Run( argument, response );
    }
    SUBCASE( "invalid name - invalid unicode" )
    {
        std::string argument{ "\xc3\x28" };
        retVal = stop.Run( argument, response );
    }
    CHECK( retVal == 0 );
    CHECK( !actor->StopVPNCalled );
    rapidjson::Document JsonDomObject;
    JsonDomObject.Parse( response );
    REQUIRE( JsonDomObject.IsObject() );
    auto result = JsonDomObject.FindMember( "ConnectionClosed" );
    REQUIRE( result != JsonDomObject.MemberEnd() );
    REQUIRE( result->value.IsBool() );
    REQUIRE( !result->value.GetBool() );
}
