// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef CONNECTOR_HTTPHANDLER_HTTPCLIENT_H_
#define CONNECTOR_HTTPHANDLER_HTTPCLIENT_H_

#include <memory>
#include "IHttpClient.h"

/// @brief Wrapper for the oatpp http client.
///
/// Connects to the given ip and port given to the factory.
struct HttpClient : public IHttpClient
{
    HttpClient() = delete;

    /// @brief Construct the HTTP client instance. Do not call this directly, use the HttpHandlerFactory::Client() method.
    HttpClient( const std::string& ip, uint16_t port );

    virtual ~HttpClient();

    /// @brief Send a request through the client connection .
    /// @param url URL to send the request to
    /// @param body Body of the HTTP request
    /// @param contentType Content type for the HTTP header of the request.
    /// @param responseBody Response body to the request.
    /// @param statusDesc Status description string returned from the server.
    /// @return HTTP status code (usually 200 for success).
    int32_t SendRequest( const std::string& url,
                         const std::string& body,
                         const std::string& contentType,
                         std::string& responseBody,
                         std::string& statusDesc );

#if !defined( UNITTEST_PUBLIC_PIMPL )
private:
#endif
    struct HttpClientImpl;
    std::shared_ptr<HttpClientImpl> _impl;
};

#endif // CONNECTOR_HTTPHANDLER_HTTPCLIENT_H_
