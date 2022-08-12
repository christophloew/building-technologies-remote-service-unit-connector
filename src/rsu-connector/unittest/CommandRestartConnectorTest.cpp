// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "Commands/RestartConnector.cpp"

#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

struct MockJobScheduler : public IJobScheduler
{
    MockJobScheduler()  = default;
    ~MockJobScheduler() = default;

    std::string AddJobName{ "" };
    std::chrono::milliseconds AddInterval;
    bool AddCalled{ false };

    virtual void Tick() {}

    IJobScheduler& Add( const std::string& jobName, std::chrono::milliseconds interval, std::function<void()> trigger )
    {
        AddCalled   = true;
        AddJobName  = jobName;
        AddInterval = interval;
        return *this;
    };

    virtual void ChangeInterval( const std::string& jobName, std::chrono::milliseconds newInterval ) {}

    virtual void Suspend( const std::string& jobName ) {}

    virtual void Resume( const std::string& jobName ) {}
};


TEST_CASE( "cmd-restartconnector - throws if no scheduler" )
{
    CHECK_THROWS_AS( Command::RestartConnector( nullptr ), std::runtime_error );
}

TEST_CASE( "cmd-restartconnector - can construct with scheduler" )
{
    auto scheduler = std::make_shared<MockJobScheduler>();
    Command::RestartConnector getDetails( scheduler );
}

TEST_CASE( "cmd-restartconnector - will trigger action with Run" )
{
    auto scheduler = std::make_shared<MockJobScheduler>();
    Command::RestartConnector getDetails( scheduler );
    std::string argument{ "" };
    std::string response;

    auto retVal = getDetails.Run( argument, response );
    CHECK( retVal == 0 );
    CHECK( scheduler->AddCalled );
    CHECK( scheduler->AddJobName == "Restart" );

    rapidjson::Document JsonDomObject;
    JsonDomObject.Parse( response );
    REQUIRE( JsonDomObject.IsObject() );
    auto result = JsonDomObject.FindMember( "RestartInitiated" );
    REQUIRE( result != JsonDomObject.MemberEnd() );
    REQUIRE( result->value.IsBool() );
    REQUIRE( result->value.GetBool() );
    auto message = JsonDomObject.FindMember( "Message" );
    CHECK( message != JsonDomObject.MemberEnd() );
}
