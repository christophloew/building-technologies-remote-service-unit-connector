// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "GetNetworkDetails.h"
#include <oatpp/core/macro/codegen.hpp>
#include <oatpp/parser/json/mapping/ObjectMapper.hpp>

namespace Command {

class _NetworkDetailDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _NetworkDetailDTO, DTO )
    DTO_FIELD( String, Name );
    DTO_FIELD( String, IPv4Address );
    DTO_FIELD( String, IPv4Gateway );
    DTO_FIELD( String, IPv6Addresses );
    DTO_FIELD( String, IPv6Gateway );
    DTO_FIELD( String, MACAddress );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

class _NetworkDetailsDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _NetworkDetailsDTO, DTO )
    DTO_FIELD( List<Object<_NetworkDetailDTO>>, NetworkDetails );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

GetNetworkDetails::GetNetworkDetails( std::shared_ptr<INetworkDetailSource> dataSource ) : m_dataSource( dataSource )
{
    if ( !dataSource )
    {
        throw std::runtime_error( "GetNetworkDetails without data source" );
    }
}

int GetNetworkDetails::Run( const std::string& argument, std::string& response )
{
    std::vector<INetworkDetailSource::NetworkDetail> info;
    auto status             = m_dataSource->GetNetworkDetails( info );
    auto details            = _NetworkDetailsDTO::createShared();
    details->NetworkDetails = decltype( details->NetworkDetails )::createShared();
    if ( status )
    {
        for ( auto& it : info )
        {
            auto net           = _NetworkDetailDTO::createShared();
            net->Name          = it.InterfaceName.c_str();
            net->IPv4Address   = it.Ipv4Address.c_str();
            net->IPv6Addresses = it.Ipv6Address.c_str();
            net->IPv4Gateway   = it.Ipv4Gateway.c_str();
            net->IPv6Gateway   = it.Ipv6Gateway.c_str();
            net->MACAddress    = it.MacAddress.c_str();
            details->NetworkDetails->push_back( net );
        }
    }
    auto objectMapper = oatpp::parser::json::mapping::ObjectMapper::createShared();
    response          = objectMapper->writeToString( details->NetworkDetails )->std_str();
    return 0;
}

} // namespace Command
