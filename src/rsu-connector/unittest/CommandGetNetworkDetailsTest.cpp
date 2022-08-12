// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/GetNetworkDetails.cpp"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

struct MockNetworkDetailSource : public Command::INetworkDetailSource
{
    MockNetworkDetailSource()  = default;
    ~MockNetworkDetailSource() = default;

    std::vector<NetworkDetail> GetNetworkDetailsResponse{
            { .InterfaceName = "if1",
              .Ipv4Address   = "127.6.7.99/8",
              .Ipv6Address   = "abcd:ef01:0000:0000::0001/32",
              .Ipv4Gateway   = "127.0.0.1",
              .Ipv6Gateway   = "abcd:ef01:0000:0000::0002",
              .MacAddress    = "01:23:45:67:89:ab",
              .IsVpn         = false },
            { .InterfaceName = "if2",
              .Ipv4Address   = "192.168.77.33/24",
              .Ipv6Address   = "1000:2000:3000:4000:5000:6000:7000:8001/124",
              .Ipv4Gateway   = "192.168.77.1",
              .Ipv6Gateway   = "1000:2000:3000:4000:5000:6000:7000:8002",
              .MacAddress    = "00:01:02:03:04:05",
              .IsVpn         = true } };
    bool GetNetworkDetailsReturn{ true };
    bool GetNetworkDetailsCalled{ false };

    bool GetNetworkDetails( std::vector<NetworkDetail>& details )
    {
        GetNetworkDetailsCalled = true;
        details                 = GetNetworkDetailsResponse;
        return GetNetworkDetailsReturn;
    }
};


TEST_CASE( "cmd-getnetworkdetails - throws if no actor" )
{
    CHECK_THROWS_AS( Command::GetNetworkDetails( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-getnetworkdetails - can construct with actor" )
{
    auto actor = std::make_shared<MockNetworkDetailSource>();
    Command::GetNetworkDetails getDetails( actor );
}

// Writing the same lines to check each returned member becomes tedious, so define a shortcut ...
inline void Validate( rapidjson::Value& object, const char* name, const char* value )
{
    auto var = object.FindMember( name );
    REQUIRE_MESSAGE( var != object.MemberEnd(), "Checking member ", name );
    REQUIRE_MESSAGE( var->value.IsString(), "Checking type for ", name );
    CHECK_MESSAGE( !strcmp( var->value.GetString(), value ), "Checking value for ", name );
}


TEST_CASE( "cmd-getnetworkdetails - will trigger action with Run" )
{
    auto actor = std::make_shared<MockNetworkDetailSource>();
    Command::GetNetworkDetails getDetails( actor );
    std::string argument{ "" };
    std::string response;

    SUBCASE( "Actor returns true" )
    {
        auto retVal = getDetails.Run( argument, response );
        CHECK( retVal == 0 );
        CHECK( actor->GetNetworkDetailsCalled );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsArray() );
        REQUIRE( 2 == JsonDomObject.Capacity() );
        REQUIRE( JsonDomObject[0].IsObject() );
        REQUIRE( JsonDomObject[1].IsObject() );

        for ( auto i = 0; i < 2; ++i )
        {
            Validate( JsonDomObject[i], "Name", actor->GetNetworkDetailsResponse[i].InterfaceName.c_str() );
            Validate( JsonDomObject[i], "IPv4Address", actor->GetNetworkDetailsResponse[i].Ipv4Address.c_str() );
            Validate( JsonDomObject[i], "IPv6Addresses", actor->GetNetworkDetailsResponse[i].Ipv6Address.c_str() );
            Validate( JsonDomObject[i], "IPv4Gateway", actor->GetNetworkDetailsResponse[i].Ipv4Gateway.c_str() );
            Validate( JsonDomObject[i], "IPv6Gateway", actor->GetNetworkDetailsResponse[i].Ipv6Gateway.c_str() );
            Validate( JsonDomObject[i], "MACAddress", actor->GetNetworkDetailsResponse[i].MacAddress.c_str() );
        }
    }

    SUBCASE( "Actor returns false" )
    {
        actor->GetNetworkDetailsReturn = false;

        auto retVal = getDetails.Run( argument, response );
        CHECK( retVal == 0 );

        rapidjson::Document JsonDomObject;
        JsonDomObject.Parse( response );
        REQUIRE( JsonDomObject.IsArray() );
        REQUIRE( 0 == JsonDomObject.Capacity() );
    }
}
