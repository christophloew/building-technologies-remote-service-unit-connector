// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/GetPortForwardings.cpp"

#include "MockPortForwardingActor.h"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

TEST_CASE( "cmd-getportforwardings - throws if no actor" )
{
    CHECK_THROWS_AS( Command::GetPortForwardings( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-getportforwardings - can construct with actor" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::GetPortForwardings getForwards( actor );
}

TEST_CASE( "cmd-getportforwardings - will trigger action with Run" )
{
    auto actor = std::make_shared<MockPortForwardingActor>();
    Command::GetPortForwardings getForwards( actor );
    std::string argument{ "" };
    std::string response;

    actor->GetForwardingsResponse.push_back(
            Command::IPortForwardingActor::PortForwardingConfiguration{ .Name            = "name1",
                                                                        .SourcePort      = "92083",
                                                                        .DestinationIP   = "SomeIP",
                                                                        .DestinationPort = "13272" } );
    actor->GetForwardingsResponse.push_back(
            Command::IPortForwardingActor::PortForwardingConfiguration{ .Name            = "name2",
                                                                        .SourcePort      = "4897805",
                                                                        .DestinationIP   = "SomeOtherIP",
                                                                        .DestinationPort = "300433" } );

    SUBCASE( "Actor returns true" )
    {
        auto retVal = getForwards.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->GetPortForwardingsCalled );

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

        auto sourceIp = JsonDomObject[0].FindMember( "SourceIP" );
        REQUIRE( sourceIp != JsonDomObject[0].MemberEnd() );
        REQUIRE( sourceIp->value.IsString() );
        CHECK( !strcmp( sourceIp->value.GetString(), "" ) );

        auto srcPort = JsonDomObject[0].FindMember( "SourcePort" );
        REQUIRE( srcPort != JsonDomObject[0].MemberEnd() );
        REQUIRE( srcPort->value.IsString() );
        CHECK( !strcmp( srcPort->value.GetString(), "92083" ) );

        auto dstPort = JsonDomObject[0].FindMember( "DestinationPort" );
        REQUIRE( dstPort != JsonDomObject[0].MemberEnd() );
        REQUIRE( dstPort->value.IsString() );
        CHECK( !strcmp( dstPort->value.GetString(), "13272" ) );
    }

    SUBCASE( "Actor returns false" )
    {
        actor->GetPortForwardingsReturn = false;

        auto retVal = getForwards.Run( argument, response );
        CHECK( retVal == 0 );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsArray() );
        REQUIRE( 0 == JsonDomObject.Capacity() );
    }
}
