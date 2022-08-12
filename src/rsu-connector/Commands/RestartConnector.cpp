// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "RestartConnector.h"
#include <oatpp/core/macro/codegen.hpp>
#include <oatpp/parser/json/mapping/ObjectMapper.hpp>
#include <spdlog/spdlog.h>

namespace Command {

class _RestartConnectorDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _RestartConnectorDTO, DTO )
    DTO_FIELD( String, Message );
    DTO_FIELD( Boolean, RestartInitiated );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

RestartConnector::RestartConnector( std::shared_ptr<IJobScheduler> scheduler ) : m_scheduler( scheduler )
{
    if ( !scheduler )
    {
        throw std::runtime_error( "RestartConnector without scheduler" );
    }
}

int RestartConnector::Run( const std::string& argument, std::string& response )
{
    auto status              = _RestartConnectorDTO::createShared();
    status->Message          = "Restart in progress.";
    status->RestartInitiated = true;
    auto objectMapper        = oatpp::parser::json::mapping::ObjectMapper::createShared();
    response                 = objectMapper->writeToString( status )->std_str();
    spdlog::warn( "Restart scheduled in three seconds." );
    m_scheduler->Add( "Restart", std::chrono::seconds( 3 ), []() { exit( 0 ); } );
    return 0;
}

} // namespace Command
