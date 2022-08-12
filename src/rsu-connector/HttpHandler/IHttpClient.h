// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef CONNECTOR_HTTPHANDLER_IHTTPCLIENT_H_
#define CONNECTOR_HTTPHANDLER_IHTTPCLIENT_H_

#include <string>

#include "common/NonCopyable.h"

/// @brief Interface for a generic http client.
/// This interface contains only the call to send requests, the destination ip and port is expected to be specified
/// by using the HttpHandlerFactory Client() method. This is because those parameters are expected to remain
/// constant during the client lifetime.
struct IHttpClient : private NonCopyable<IHttpClient>
{
    virtual ~IHttpClient() = default;

    /// @brief Send a request through the client connection .
    /// @param url URL to send the request to
    /// @param body Body of the HTTP request
    /// @param contentType Content type for the HTTP header of the request.
    /// @param responseBody Response body to the request.
    /// @param statusDesc Status description string returned from the server.
    /// @return HTTP status code (usually 200 for success).
    virtual int32_t SendRequest( const std::string& url,
                                 const std::string& body,
                                 const std::string& contentType,
                                 std::string& responseBody,
                                 std::string& statusDesc ) = 0;
};

#endif // CONNECTOR_HTTPHANDLER_IHTTPCLIENT_H_
