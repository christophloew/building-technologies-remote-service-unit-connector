// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "HttpServer.h"
#include "oatpp/web/server/HttpConnectionHandler.hpp"
#include "oatpp/network/Server.hpp"
#include "oatpp/network/tcp/server/ConnectionProvider.hpp"
#include <spdlog/spdlog.h>

struct HttpServer::HttpServerImpl
{
    std::atomic<bool> ContinueRunning{ true };
    std::shared_ptr<oatpp::web::server::HttpConnectionHandler> ConnectionHandler;
    std::shared_ptr<oatpp::network::tcp::server::ConnectionProvider> ConnectionProvider;
    std::shared_ptr<oatpp::web::server::HttpRouter> Router;
    std::shared_ptr<oatpp::network::Server> Server;
};

#define CASE( num )                                                                                                    \
    case num:                                                                                                          \
        st = Status::CODE_##num;                                                                                       \
        break;

class Handler : public oatpp::web::server::HttpRequestHandler
{
public:
    Handler( HttpServerHandlerType handler ) : m_handler( handler ) {}

    virtual std::shared_ptr<OutgoingResponse> handle( const std::shared_ptr<IncomingRequest>& request )
    {
        auto body = request->readBodyToString()->std_str();
        auto path = request->getPathTail()->std_str();
        ServerHandlerDTO dto{ .RequestPath = path, .RequestBody = body };
        m_handler( dto );

        // Status.statusDescription is a C pointer that does not convey ownership. Since the response returned by
        // createResponse will outlive this scope, we cannot simply construct the statusDescription from a std::string.c_str() here
        // since the pointer this returns will be invalid as soon as this scope is left.
        // Instead, eliminate the std::string and reuse the static response Status definitions from oatpp when present and otherwise return
        // a pointer to the const text segement.
        Status st;
        switch ( dto.ResponseCode )
        {
            CASE( 100 )
            CASE( 101 )
            CASE( 102 )

            CASE( 200 )
            CASE( 201 )
            CASE( 202 )
            CASE( 203 )
            CASE( 204 )
            CASE( 205 )
            CASE( 206 )
            CASE( 207 )
            CASE( 226 )

            CASE( 300 )
            CASE( 301 )
            CASE( 302 )
            CASE( 303 )
            CASE( 304 )
            CASE( 305 )
            CASE( 306 )
            CASE( 307 )

            CASE( 400 )
            CASE( 401 )
            CASE( 402 )
            CASE( 403 )
            CASE( 404 )
            CASE( 405 )
            CASE( 406 )
            CASE( 407 )
            CASE( 408 )
            CASE( 409 )
            CASE( 410 )
            CASE( 411 )
            CASE( 412 )
            CASE( 413 )
            CASE( 414 )
            CASE( 415 )
            CASE( 416 )
            CASE( 417 )
            CASE( 422 )
            CASE( 423 )
            CASE( 424 )
            CASE( 425 )
            CASE( 426 )
            CASE( 428 )
            CASE( 429 )
            CASE( 431 )
            CASE( 434 )
            CASE( 444 )
            CASE( 449 )
            CASE( 451 )

            CASE( 500 )
            CASE( 501 )
            CASE( 502 )
            CASE( 503 )
            CASE( 504 )
            CASE( 505 )
            CASE( 506 )
            CASE( 507 )
            CASE( 508 )
            CASE( 509 )
            CASE( 510 )
            CASE( 511 )
            default:
                st = Status( dto.ResponseCode, "Unknown" );
        }
        return ResponseFactory::createResponse( st, dto.ResponseBody.c_str() );
    }

private:
    HttpServerHandlerType m_handler;
};

HttpServer::HttpServer( const std::string& ip, uint16_t port ) : _impl( std::make_shared<HttpServerImpl>() )
{
    _impl->Router = oatpp::web::server::HttpRouter::createShared();
    auto type     = oatpp::network::Address::Family::IP_4;
    if ( ip.find( ':' ) != ip.npos )
    {
        type = oatpp::network::Address::Family::IP_6;
    }
    _impl->ConnectionHandler = oatpp::web::server::HttpConnectionHandler::createShared( _impl->Router );
    _impl->ConnectionProvider =
            oatpp::network::tcp::server::ConnectionProvider::createShared( { ip.c_str(), port, type } );
    _impl->Server = std::make_shared<oatpp::network::Server>( _impl->ConnectionProvider, _impl->ConnectionHandler );
    spdlog::debug( "HttpServer" );
}

HttpServer::~HttpServer()
{
    spdlog::debug( "~HttpServer" );
}

void HttpServer::AddHandler( const std::string& method, const std::string& path, HttpServerHandlerType handler )
{
    _impl->Router->route( method.c_str(), path.c_str(), std::make_shared<Handler>( handler ) );
}

void HttpServer::Run()
{
    _impl->Server->run( [this]() { return this->_impl->ContinueRunning.load(); } );
}

void HttpServer::Stop()
{
    _impl->ConnectionProvider->stop();
    _impl->ContinueRunning.store( false );
    _impl->ConnectionHandler->stop();
}
