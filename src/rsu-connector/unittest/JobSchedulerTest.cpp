// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <vector>
#include <doctest/doctest.h>

#include "JobScheduler/JobScheduler.cpp"

TEST_CASE( "job - can add job" )
{
    int runs  = 0;
    int runs2 = 0;
    JobScheduler jobber( std::chrono::milliseconds( 100 ) );
    jobber.Add( "first", std::chrono::milliseconds( 100 ), [&]() { runs++; } )
            .Add( "second", std::chrono::milliseconds( 200 ), [&]() { runs2++; } );
    jobber.Tick();
    jobber.Tick();
    jobber.Tick();
    CHECK( runs == 3 );
    CHECK( runs2 == 2 );
}

TEST_CASE( "job - can reschedule job" )
{
    int runs  = 0;
    int runs2 = 0;
    JobScheduler jobber( std::chrono::milliseconds( 100 ) );
    jobber.Add( "first", std::chrono::milliseconds( 100 ), [&]() { runs++; } )
            .Add( "second", std::chrono::milliseconds( 200 ), [&]() { runs2++; } );
    jobber.ChangeInterval( "second", std::chrono::milliseconds( 100 ) );
    jobber.ChangeInterval( "first", std::chrono::milliseconds( 200 ) );
    jobber.Tick();
    jobber.Tick();
    jobber.Tick();
    CHECK( runs == 2 );
    CHECK( runs2 == 3 );
}

TEST_CASE( "job - can suspend and resume job" )
{
    int runs  = 0;
    int runs2 = 0;
    JobScheduler jobber( std::chrono::milliseconds( 100 ) );
    jobber.Add( "first", std::chrono::milliseconds( 100 ), [&]() { runs++; } )
            .Add( "second", std::chrono::milliseconds( 100 ), [&]() { runs2++; } );
    jobber.Tick();
    CHECK( runs == 1 );
    CHECK( runs2 == 1 );
    jobber.Suspend( "first" );
    jobber.Tick();
    CHECK( runs == 1 );
    CHECK( runs2 == 2 );
    jobber.Suspend( "second" );
    jobber.Tick();
    CHECK( runs == 1 );
    CHECK( runs2 == 2 );
    jobber.Resume( "second" );
    jobber.Tick();
    CHECK( runs == 1 );
    CHECK( runs2 == 3 );
    jobber.Resume( "first" );
    jobber.Tick();
    CHECK( runs == 2 );
    CHECK( runs2 == 4 );
}
