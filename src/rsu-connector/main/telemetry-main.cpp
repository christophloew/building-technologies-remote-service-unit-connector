// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <unistd.h>
#include <map>
#include <iomanip>
#include <fstream>
#include <regex>
#include <cstdio>
#include <thread>
#include <cstring>
#include <signal.h>
#include <regex>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/cfg/env.h>
#include <spdlog/fmt/bin_to_hex.h>

#include "AzureSDKWrapper/IotHubFactory.h"
#include "Configuration/Configuration.h"

#include "HttpHandler/HttpHandlerFactory.h"
#include "IotHubOrNull.h"
#include <base64.h>

using namespace std::chrono_literals;

static std::atomic<bool> running{ true };

void intHandler( int dummy )
{
    running = false;
}

int main( int argc, char** argv )
{
    spdlog::cfg::load_env_levels();
    auto err_logger = spdlog::stderr_color_mt( "stderr" );

    signal( SIGINT, intHandler );
    signal( SIGTERM, intHandler );

    std::shared_ptr<Configuration> config;

    std::string configurationFilename;
    if ( argc < 2 )
    {
        configurationFilename = "config/telemetry-forwarder-config.json";
    }
    else
    {
        configurationFilename = argv[1];
    }

    try
    {
        config = std::make_shared<Configuration>( configurationFilename );
    }
    catch ( const std::exception& e )
    {
        spdlog::error( "Could not read configuration {}: {}", configurationFilename, e.what() );
        exit( 1 );
    }

    bool forwardToEffilink{ true };
    try
    {
        forwardToEffilink = config->GetBooleanValue( "forward_to_effilink" );
    }
    catch ( const std::exception& e )
    {
        spdlog::info( "Could not read forward_to_effilink entry: ", e.what() );
    }

    std::shared_ptr<IotHubOrNull> iotHubClient;
    try
    {
        iotHubClient = std::make_shared<IotHubOrNull>( config );
    }
    catch ( const std::exception& e )
    {
        spdlog::error( "Creating IotHub client failed due to exception {}, exiting...", e.what() );
        exit( 1 );
    }
    if ( !iotHubClient )
    {
        spdlog::error( "IotHub client creation failed, exiting..." );
        exit( 1 );
    }
    std::thread threadIotHub( [iotHubClient]() {
        while ( running )
        {
            try
            {
                auto connected = iotHubClient->Connect();
                if ( connected )
                {
                    break;
                }
                else
                {
                    std::this_thread::sleep_for( 10s );
                }
            }
            catch ( const std::exception& e )
            {
                spdlog::error( "Connection to IotHub failed due to exception {}, exiting...", e.what() );
                exit( 1 );
            }
        }
    } );
    threadIotHub.detach();

    auto httpFactory = std::make_shared<HttpHandlerFactory>();

    // Setup http client to Effilink service, this client will be used to forward requests that this service receives for backward compatibility.
    auto client = httpFactory->Client( "127.0.0.1", 9001 );

    // Setup http server that receives the telemetry data and forwards it to the Effilink service and to the IotHub
    // This sets up an IPv6 service which will also receive IPv4 requests via v4 in v6 emulation.
    auto server6 = httpFactory->Server( "::0", 9000 );

    std::regex validCustomer( "/cm/([0-9]+)" );

    server6->AddHandler(
            "POST",
            "*",
            [client, iotHubClient, forwardToEffilink, validCustomer]( ServerHandlerDTO& dto ) -> void {
                dto.ResponseBody = "";
                dto.ResponseCode = 500;
                std::string responseStatusDescription{ "Internal Error" };
                try
                {
                    spdlog::info( "Received path {} size {}", dto.RequestPath, dto.RequestBody.size() );

                    auto encodedPath = base64_encode(
                            dto.RequestPath,
                            true ); // the path may contain characters that are not handled by the IotHub, so encode it safely.

                    std::map<const std::string, const std::string> properties = { { "messageversion", "0.1" },
                                                                                  { "messagetype", "telemetry" },
                                                                                  { "path", encodedPath } };
                    std::smatch match;
                    if ( std::regex_match( dto.RequestPath, match, validCustomer ) && match.size() > 1 )
                    {
                        std::string customer = match.str( 1 );
                        properties.emplace( std::pair<const std::string, const std::string>( "customer", customer ) );
                    }

                    iotHubClient->SendMessage( dto.RequestBody, properties );

                    if ( forwardToEffilink )
                    {
                        spdlog::info( "Forwarding telemetry to Effilink, path {} size {}",
                                      dto.RequestPath,
                                      dto.RequestBody.size() );

                        // forward response body and status from client request to server response
                        dto.ResponseCode = client->SendRequest( dto.RequestPath,
                                                                dto.RequestBody,
                                                                "application/json",
                                                                dto.ResponseBody,
                                                                responseStatusDescription );
                        spdlog::info( "Forwarded response body {} status <{}-{}>",
                                      dto.ResponseBody,
                                      dto.ResponseCode,
                                      responseStatusDescription );
                    }
                    else
                    {
                        spdlog::debug( "Effilink forwarding disabled." );
                        dto.ResponseCode          = 200;
                        responseStatusDescription = "OK";
                    }
                }
                catch ( std::exception& e )
                {
                    spdlog::error( "Exception occurred during message handling: {}", e.what() );
                }
            } );

    std::thread thread6( [&]() {
        spdlog::info( "server thread start." );
        server6->Run();
        spdlog::info( "server thread stop." );
    } );

    while ( running )
    {
        auto retVal = pause();
        spdlog::info( "Pause call returned {}.", retVal );
    }

    server6->Stop();
    thread6.join();
    iotHubClient->Disconnect();

    spdlog::info( "Exiting." );

    return ( 0 );
}
