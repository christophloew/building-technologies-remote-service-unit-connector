// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <vector>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include "Configuration/Configuration.cpp"
#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

TEST_CASE( "config - throws if no config" )
{
    CHECK_THROWS_AS( Configuration( "" ), std::runtime_error );
}

TEST_CASE( "config - throws if invalid config" )
{
    CHECK_THROWS_AS( Configuration( "/dev/zero" ), std::runtime_error );
}

TEST_CASE( "config - valid config" )
{
    Configuration config( "valid_config.json" );
    SUBCASE( "get string item that is present" )
    {
        auto strVal = config.GetStringValue( "stringitem" );
        CHECK( strVal == "testsetting" );
    }
    SUBCASE( "get string item that is not present" )
    {
        CHECK_THROWS_AS( config.GetStringValue( "doesnotexist" ), std::runtime_error );
    }
    SUBCASE( "get invalid string item" )
    {
        CHECK_THROWS_AS( config.GetStringValue( "intitem" ), std::runtime_error );
        CHECK_THROWS_AS( config.GetStringValue( "boolitem" ), std::runtime_error );
    }

    SUBCASE( "get int item that is present" )
    {
        auto intVal = config.GetIntValue( "intitem" );
        CHECK( intVal == 99999 );
    }
    SUBCASE( "get int item that is not present" )
    {
        CHECK_THROWS_AS( config.GetIntValue( "doesnotexist" ), std::runtime_error );
    }
    SUBCASE( "get invalid int item" )
    {
        CHECK_THROWS_AS( config.GetIntValue( "stringitem" ), std::runtime_error );
        CHECK_THROWS_AS( config.GetIntValue( "boolitem" ), std::runtime_error );
    }

    SUBCASE( "get boolean item that is present" )
    {
        auto boolVal = config.GetBooleanValue( "boolitem" );
        CHECK( boolVal == true );
    }
    SUBCASE( "get boolean item that is not present" )
    {
        CHECK_THROWS_AS( config.GetBooleanValue( "doesnotexist" ), std::runtime_error );
    }
    SUBCASE( "get invalid boolean item" )
    {
        CHECK_THROWS_AS( config.GetBooleanValue( "intitem" ), std::runtime_error );
        CHECK_THROWS_AS( config.GetBooleanValue( "stringitem" ), std::runtime_error );
    }
}
