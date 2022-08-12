// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "GetVPNConfigurations.h"
#include <oatpp/core/macro/codegen.hpp>
#include <oatpp/parser/json/mapping/ObjectMapper.hpp>

namespace Command {

class _GetVPNConfigurationsDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _GetVPNConfigurationsDTO, DTO )
    DTO_FIELD( String, Name );
    DTO_FIELD( Boolean, IsConnected );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

class _GetVPNConfigurationsResponseDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _GetVPNConfigurationsResponseDTO, DTO )
    DTO_FIELD( List<Object<_GetVPNConfigurationsDTO>>, VPNConfigurationDetails );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

GetVPNConfigurations::GetVPNConfigurations( std::shared_ptr<IVPNActor> actor ) : m_actor( actor )
{
    if ( !actor )
    {
        throw std::runtime_error( "GetVPNConfigurations without actor" );
    }
}

int GetVPNConfigurations::Run( const std::string& argument, std::string& response )
{
    std::vector<IVPNActor::VPNConfiguration> config;
    auto status                      = m_actor->GetVPNConfigurations( config );
    auto details                     = _GetVPNConfigurationsResponseDTO::createShared();
    details->VPNConfigurationDetails = decltype( details->VPNConfigurationDetails )::createShared();
    if ( status )
    {
        for ( auto& it : config )
        {
            auto entry         = _GetVPNConfigurationsDTO::createShared();
            entry->Name        = it.Name.c_str();
            entry->IsConnected = it.IsConnected;
            details->VPNConfigurationDetails->push_back( entry );
        }
    }

    auto objectMapper = oatpp::parser::json::mapping::ObjectMapper::createShared();
    response          = objectMapper->writeToString( details->VPNConfigurationDetails )->std_str();
    return 0;
}

} // namespace Command
