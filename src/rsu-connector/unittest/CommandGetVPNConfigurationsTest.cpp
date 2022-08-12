// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/GetVPNConfigurations.cpp"

#include "MockVPNActor.h"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

TEST_CASE( "cmd-getvpnconfigs - throws if no actor" )
{
    CHECK_THROWS_AS( Command::GetVPNConfigurations( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-getvpnconfigs - can construct with actor" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::GetVPNConfigurations getConfigs( actor );
}

TEST_CASE( "cmd-getvpnconfigs - will trigger action with Run" )
{
    auto actor = std::make_shared<MockVPNActor>();
    Command::GetVPNConfigurations getConfigs( actor );
    std::string argument{ "" };
    std::string response;

    actor->GetVPNResponse.push_back( Command::IVPNActor::VPNConfiguration{ .Name = "name1", .IsConnected = true } );
    actor->GetVPNResponse.push_back( Command::IVPNActor::VPNConfiguration{ .Name = "name2", .IsConnected = false } );

    SUBCASE( "Actor returns true" )
    {
        auto retVal = getConfigs.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->GetVPNConfigurationsCalled );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsArray() );
        REQUIRE( 2 == JsonDomObject.Capacity() );
        REQUIRE( JsonDomObject[0].IsObject() );
        REQUIRE( JsonDomObject[1].IsObject() );
        auto name1 = JsonDomObject[0].FindMember( "Name" );
        REQUIRE( name1 != JsonDomObject[0].MemberEnd() );
        REQUIRE( name1->value.IsString() );
        CHECK( !strcmp( name1->value.GetString(), "name1" ) );

        auto name2 = JsonDomObject[1].FindMember( "Name" );
        REQUIRE( name2 != JsonDomObject[1].MemberEnd() );
        REQUIRE( name2->value.IsString() );
        CHECK( !strcmp( name2->value.GetString(), "name2" ) );

        auto status1 = JsonDomObject[0].FindMember( "IsConnected" );
        REQUIRE( status1 != JsonDomObject[0].MemberEnd() );
        REQUIRE( status1->value.IsBool() );
        CHECK( status1->value.GetBool() );

        auto status2 = JsonDomObject[1].FindMember( "IsConnected" );
        REQUIRE( status2 != JsonDomObject[1].MemberEnd() );
        REQUIRE( status2->value.IsBool() );
        CHECK( !status2->value.GetBool() );
    }

    SUBCASE( "Actor returns false" )
    {
        actor->GetVPNConfigurationsReturn = false;

        auto retVal = getConfigs.Run( argument, response );
        CHECK( retVal == 0 );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsArray() );
        REQUIRE( 0 == JsonDomObject.Capacity() );
    }
}
