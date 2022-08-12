// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <unistd.h>
#include <memory>
#include <fstream>
#include "Configuration/Configuration.h"

#define RAPIDJSON_HAS_STDSTRING 1
#define RAPIDJSON_HAS_CXX11_RANGE_FOR 1

#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>
#include <rapidjson/istreamwrapper.h>

struct Configuration::ConfigurationImpl
{
    ConfigurationImpl( const std::string filename );

    rapidjson::Document JsonDomObject;
};

Configuration::ConfigurationImpl::ConfigurationImpl( const std::string filename )
{
    std::ifstream stream( filename );
    rapidjson::IStreamWrapper isw( stream );
    JsonDomObject.ParseStream( isw );
    if ( !JsonDomObject.IsObject() )
    {
        throw std::runtime_error( "Configuration " + filename + " is not a JSON object" );
    }
}

Configuration::Configuration( const std::string filename ) : _impl{ std::make_shared<ConfigurationImpl>( filename ) } {}

Configuration::~Configuration() {}

int32_t Configuration::GetIntValue( const std::string& key )
{
    auto m = _impl->JsonDomObject.FindMember( key );
    if ( m == _impl->JsonDomObject.MemberEnd() )
    {
        throw std::runtime_error( "Key not found" );
    }

    if ( !m->value.IsInt() )
    {
        throw std::runtime_error( "Value not an int" );
    }
    return m->value.GetInt();
}

std::string Configuration::GetStringValue( const std::string& key )
{
    auto m = _impl->JsonDomObject.FindMember( key );
    if ( m == _impl->JsonDomObject.MemberEnd() )
    {
        throw std::runtime_error( "Key not found" );
    }

    if ( !m->value.IsString() )
    {
        throw std::runtime_error( "Value not a string" );
    }
    return m->value.GetString();
}

bool Configuration::GetBooleanValue( const std::string& key )
{
    auto m = _impl->JsonDomObject.FindMember( key );
    if ( m == _impl->JsonDomObject.MemberEnd() )
    {
        throw std::runtime_error( "Key not found" );
    }

    if ( !m->value.IsBool() )
    {
        throw std::runtime_error( "Value not a boolean" );
    }
    return m->value.GetBool();
}
