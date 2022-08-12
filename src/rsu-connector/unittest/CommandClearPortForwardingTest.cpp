// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/ClearPortForwardings.cpp"

#include "MockPortForwardingActor.h"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

TEST_CASE( "cmd-clearportforwarding - throws if no actor" )
{
    CHECK_THROWS_AS( Command::ClearPortForwardings( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-clearportforwarding - can construct with actor" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::ClearPortForwardings clear( actor );
}

TEST_CASE( "cmd-clearportforwarding - will trigger action with Run" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::ClearPortForwardings clear( actor );
    std::string argument{ "" };
    std::string response;

    SUBCASE( "Actor returns true" )
    {
        auto retVal = clear.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->ClearRedirectCalled );
        CHECK( actor->ReloadFirewallCalled );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "PortForwardingCleared" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }

    SUBCASE( "Actor returns false" )
    {
        actor->ClearRedirectReturn = false;

        auto retVal = clear.Run( argument, response );
        CHECK( retVal == 0 );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsObject() );
        auto result = JsonDomObject.FindMember( "PortForwardingCleared" );
        REQUIRE( result != JsonDomObject.MemberEnd() );
        REQUIRE( result->value.IsBool() );
        REQUIRE( !result->value.GetBool() );
        auto message = JsonDomObject.FindMember( "Message" );
        CHECK( message != JsonDomObject.MemberEnd() );
    }
}
