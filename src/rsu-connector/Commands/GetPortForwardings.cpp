// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "GetPortForwardings.h"
#include <oatpp/core/macro/codegen.hpp>
#include <oatpp/parser/json/mapping/ObjectMapper.hpp>

namespace Command {

class _PortForwardingConfigurationDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _PortForwardingConfigurationDTO, DTO )
    DTO_FIELD( String, Name );
    DTO_FIELD( String, SourceIP );
    DTO_FIELD( String, SourcePort );
    DTO_FIELD( String, DestinationIP );
    DTO_FIELD( String, DestinationPort );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

class _GetPortForwardingsResponseDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _GetPortForwardingsResponseDTO, DTO )
    DTO_FIELD( List<Object<_PortForwardingConfigurationDTO>>, PortForwardingDetails );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

GetPortForwardings::GetPortForwardings( std::shared_ptr<IPortForwardingActor> actor ) : m_actor( actor )
{
    if ( !actor )
    {
        throw std::runtime_error( "GetPortForwardings without actor" );
    }
}

int GetPortForwardings::Run( const std::string& argument, std::string& response )
{
    std::vector<IPortForwardingActor::PortForwardingConfiguration> config;
    auto status                    = m_actor->GetPortForwardings( config );
    auto details                   = _GetPortForwardingsResponseDTO::createShared();
    details->PortForwardingDetails = decltype( details->PortForwardingDetails )::createShared();
    if ( status )
    {
        for ( auto& it : config )
        {
            auto entry             = _PortForwardingConfigurationDTO::createShared();
            entry->Name            = it.Name.c_str();
            entry->SourcePort      = it.SourcePort.c_str();
            entry->SourceIP        = "";
            entry->DestinationPort = it.DestinationPort.c_str();
            entry->DestinationIP   = it.DestinationIP.c_str();
            details->PortForwardingDetails->push_back( entry );
        }
    }

    auto objectMapper = oatpp::parser::json::mapping::ObjectMapper::createShared();
    response          = objectMapper->writeToString( details->PortForwardingDetails )->std_str();
    return 0;
}

} // namespace Command
