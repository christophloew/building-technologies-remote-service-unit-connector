// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <vector>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include "HttpHandler/HttpClient.cpp"
#include "HttpHandler/HttpServer.cpp"
#include "HttpHandler/HttpHandlerFactory.cpp"
#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

TEST_CASE( "httpclient - can be created through factory") {
    HttpHandlerFactory factory;
    auto client = factory.Client("127.0.0.1", 12345);

    REQUIRE(client.get() != nullptr);
}

TEST_CASE( "httpserver - can be created through factory") {
    HttpHandlerFactory factory;
    auto server = factory.Server("127.0.0.1", 12345);

    REQUIRE(server.get() != nullptr);
}

TEST_CASE( "httpclient - exception is thrown when invalid port is specified and SendRequest is triggered") {
    HttpHandlerFactory factory;
    auto client = factory.Client("127.0.0.1", 0);
    REQUIRE(client.get() != nullptr);

    std::string responseBody;
    std::string statusDescription;
    CHECK_THROWS_AS(client->SendRequest("/", "{}", "application/json",responseBody,statusDescription), std::exception);
}

TEST_CASE( "httpclient - exception is thrown when empty IP is specified and SendRequest is triggered") {
    HttpHandlerFactory factory;
    auto client = factory.Client("", 12345);
    REQUIRE(client.get() != nullptr);

    std::string responseBody;
    std::string statusDescription;
    CHECK_THROWS_AS(client->SendRequest("/", "{}", "application/json",responseBody,statusDescription), std::exception);
}

// oatpp server has a poll timeout of 1s, so this test needs to wait at least 1 second for the server to terminate.
TEST_CASE( "httpend2end - when client request is issued, server can receive url" * doctest::timeout(2)) {
    HttpHandlerFactory factory;
    auto client = factory.Client("127.0.0.1", 12345);
    auto server = factory.Server("0.0.0.0", 12345);
    std::string receivedUrl;
    std::string receivedContent;

    REQUIRE(client.get() != nullptr);
    REQUIRE(server.get() != nullptr);
    server->AddHandler("POST", "*", [&](ServerHandlerDTO& dto){
        receivedUrl = dto.RequestPath;
        receivedContent = dto.RequestBody;
        dto.ResponseCode=405;
        dto.ResponseBody = "dummy";
    });

    std::thread serverThread([&]() { server->Run(); });
    std::string responseBody;
    std::string responseStatusDescription;
    auto statusCode = client->SendRequest("/this/is/a/test", "{}", "somecontent", responseBody, responseStatusDescription);
    server->Stop();

    REQUIRE(receivedUrl == "this/is/a/test"); // oatpp will strip off the first slash
    REQUIRE(statusCode == 405);
    REQUIRE(responseBody == "dummy");
    REQUIRE(responseStatusDescription.find("Method Not Allowed") != responseStatusDescription.npos);

    server.reset();
    serverThread.join();
}




#define DOCTEST_VALUE_PARAMETERIZED_DATA(data, data_container)                                  \
    static size_t _doctest_subcase_idx = 0;                                                     \
    std::for_each(data_container.begin(), data_container.end(), [&](const auto& in) {           \
        DOCTEST_SUBCASE((std::string(#data_container "[") +                                     \
                        std::to_string(_doctest_subcase_idx++) + "]").c_str()) { data = in; }   \
    });                                                                                         \
    _doctest_subcase_idx = 0


// oatpp server has a poll timeout of 1s, so this test needs to wait at least 1 second for the server to terminate.
TEST_CASE( "httpend2end - when client request is issued using ipv6, server can receive url" * doctest::timeout(2)) {
    using namespace oatpp::web::protocol::http;
    std::vector<Status> statusCodeList{
        Status::CODE_100, Status::CODE_101, Status::CODE_102,
        Status::CODE_200, Status::CODE_201, Status::CODE_202, Status::CODE_203,
        Status::CODE_204, Status::CODE_205, Status::CODE_206, Status::CODE_207,
        Status::CODE_226, Status::CODE_300, Status::CODE_301, Status::CODE_302,
        Status::CODE_303, Status::CODE_304, Status::CODE_305, Status::CODE_306,
        Status::CODE_307,
        Status::CODE_400, Status::CODE_401, Status::CODE_402, Status::CODE_403,
        Status::CODE_404, Status::CODE_405, Status::CODE_406, Status::CODE_407,
        Status::CODE_408, Status::CODE_409, Status::CODE_410, Status::CODE_411,
        Status::CODE_412, Status::CODE_413, Status::CODE_414, Status::CODE_415,
        Status::CODE_416, Status::CODE_417, Status::CODE_422, Status::CODE_423,
        Status::CODE_424, Status::CODE_425, Status::CODE_426,
        Status::CODE_428, Status::CODE_429, Status::CODE_431, Status::CODE_434,
        Status::CODE_444, Status::CODE_449, Status::CODE_451,
        Status::CODE_500, Status::CODE_501, Status::CODE_502, Status::CODE_503,
        Status::CODE_504, Status::CODE_505, Status::CODE_506, Status::CODE_507,
        Status::CODE_508, Status::CODE_509, Status::CODE_510, Status::CODE_511,
        Status(999,"Unknown") };

    std::vector<std::pair<int32_t, std::string>> results;

    HttpHandlerFactory factory;
    auto client = factory.Client("::1", 12345);
    auto server = factory.Server("::0", 12345);
    std::string receivedUrl;
    std::string receivedContent;
    Status status;

    REQUIRE(client.get() != nullptr);
    REQUIRE(server.get() != nullptr);
    server->AddHandler("POST", "*", [&](ServerHandlerDTO& dto){
        receivedUrl = dto.RequestPath;
        receivedContent = dto.RequestBody;
        dto.ResponseCode = status.code;
        dto.ResponseBody = "dummy";
    });

    std::thread serverThread([&]() { server->Run(); });
    std::string responseBody;
    std::string responseStatusDescription;

    for(auto& item: statusCodeList)
    {
        status = item;
        auto returnedStatusCode = client->SendRequest("/this/is/a/test", "{}", "somecontent", responseBody, responseStatusDescription);
        CHECK(responseBody == "dummy");
        CHECK(receivedUrl == "this/is/a/test"); // oatpp will strip off the first slash
        CHECK(returnedStatusCode == item.code);
        CHECK(responseStatusDescription.find(item.description) != responseStatusDescription.npos);
    }

    server.reset();
    serverThread.join();
}
