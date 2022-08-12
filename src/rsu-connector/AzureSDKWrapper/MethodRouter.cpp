// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "MethodRouter.h"
#include "spdlog/spdlog.h"
#include <numeric>

struct MethodRouter::MethodRouterImpl
{
    MethodRouterImpl()  = default;
    ~MethodRouterImpl() = default;

    std::map<const std::string, std::function<int( const std::string& arguments, std::string& reply )>> Methods;
};

MethodRouter::MethodRouter() : _impl( std::make_shared<MethodRouterImpl>() ) {}

int MethodRouter::ReceiveMethodCall( const std::string& method, const std::string& arguments, std::string& reply )
{
    auto entry = _impl->Methods.find( method );
    if ( entry != _impl->Methods.end() )
    {
        try
        {
            return entry->second( arguments, reply );
        }
        catch ( std::exception& e )
        {
            spdlog::warn( "Exception during command {} argument{} exception {}", method, arguments, e.what() );
        }
    }
    return -1;
}

void MethodRouter::RegisterMethodHandler(
        const std::string& method,
        std::function<int( const std::string& arguments, std::string& reply )> handler )
{
    _impl->Methods.emplace( method, handler );
}
