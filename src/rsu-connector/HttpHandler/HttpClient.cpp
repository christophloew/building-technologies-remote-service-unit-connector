// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "HttpClient.h"
#include "oatpp/web/client/ApiClient.hpp"
#include "oatpp/web/client/HttpRequestExecutor.hpp"
#include "oatpp/network/tcp/client/ConnectionProvider.hpp"
#include "oatpp/parser/json/mapping/ObjectMapper.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include <spdlog/spdlog.h>

class SimpleApiClient : public oatpp::web::client::ApiClient
{
#include OATPP_CODEGEN_BEGIN( ApiClient ) ///< Begin code-gen section
    API_CLIENT_INIT( SimpleApiClient )
    API_CALL( "POST",
              "{path}",
              forwardData,
              PATH( String, path ),
              BODY_STRING( String, data ),
              HEADER( String, content_type, "Content-Type" ) )
#include OATPP_CODEGEN_END( ApiClient ) ///< End code-gen section
};

struct HttpClient::HttpClientImpl
{
    std::shared_ptr<SimpleApiClient> Client;
};

HttpClient::HttpClient( const std::string& ip, uint16_t port ) : _impl( std::make_shared<HttpClientImpl>() )
{
    auto clientConnectionProvider =
            oatpp::network::tcp::client::ConnectionProvider::createShared( { ip.c_str(), port } );
    auto clientRequestExec = oatpp::web::client::HttpRequestExecutor::createShared( clientConnectionProvider );
    auto objectMapper      = oatpp::parser::json::mapping::ObjectMapper::createShared();
    _impl->Client          = std::make_shared<SimpleApiClient>( clientRequestExec, objectMapper );
    spdlog::debug( "HttpClient" );
}

HttpClient::~HttpClient()
{
    spdlog::debug( "~HttpClient" );
}

int32_t HttpClient::SendRequest( const std::string& url,
                                 const std::string& body,
                                 const std::string& contentType,
                                 std::string& responseBody,
                                 std::string& statusDesc )
{
    auto response     = _impl->Client->forwardData( url.c_str(), body.c_str(), contentType.c_str() );
    responseBody      = response->readBodyToString()->std_str();
    auto responseCode = response->getStatusCode();
    statusDesc        = response->getStatusDescription()->std_str();
    return responseCode;
}
