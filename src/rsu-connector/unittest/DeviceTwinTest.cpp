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
#include "DeviceTwin/DeviceTwin.cpp"
#include <doctest/doctest.h>
#include <spdlog/spdlog.h>

struct MockDeviceInformationProvider : public IDeviceInformation
{
    std::string Name() { return _name; }
    bool SetName(const std::string& name) { _name = name; return _setname_retVal;}
    std::string Serial() { return _serial; }
    std::string Hostname() { return _hostname; }
    std::string Type() {return _type; }
    std::string FirmwareVersion() {return _firmware; }
    std::string MACAddress() { return _mac; }
    bool VPNConnectionActive() { return _vpn; }

    std::string _name{""};
    std::string _serial{"Unique"};
    std::string _hostname{"Parrot"};
    std::string _type{"mock"};
    std::string _firmware{"Soft"};
    std::string _mac{"00:01:02:03:F0:0F"};
    bool _vpn{false};
    bool _setname_retVal{true};
};

TEST_CASE( "devicetwin - can be created") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);
}

TEST_CASE( "devicetwin - throws exception without provider") {
    CHECK_THROWS_AS(DeviceTwin dt(nullptr), std::runtime_error);
}

TEST_CASE( "devicetwin - returns false on empty input") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);

    REQUIRE_FALSE(dt.ReceiveDeviceTwin("", false));
}

TEST_CASE( "devicetwin - returns false on invalid json") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);

    REQUIRE_FALSE(dt.ReceiveDeviceTwin("{,", false)); // invalid JSON
}

TEST_CASE( "devicetwin - returns false on device twin with desired object but no $version") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);

    REQUIRE_FALSE(dt.ReceiveDeviceTwin(R"({ "desired": {}, "reported": {} })", false));
}

TEST_CASE( "devicetwin - returns true on empty object in twin even when no handler set") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);

    REQUIRE(dt.ReceiveDeviceTwin(R"({ "reported": {}})", false));
}

TEST_CASE( "devicetwin - returns true on empty object in twin even and produces reported when handler set") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);
    std::string receivedReported{"INVALID"};
    dt.SetReportDeviceTwin([&](const std::string& reported){ receivedReported = reported; });

    REQUIRE(dt.ReceiveDeviceTwin(R"({})", false));
    REQUIRE( receivedReported == R"({"Name":{"value":"","ac":null,"av":null,"ad":null},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false})");
}

TEST_CASE( "devicetwin - returns true on complete device twin object and produces no reported if nothing changed") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);
    bool reportReceived{false};
    dt.SetReportDeviceTwin([&](const std::string& reported){ reportReceived = true; });

    REQUIRE(dt.ReceiveDeviceTwin(R"({"reported":{"Name":{"value":"","ac":null,"av":null,"ad":null},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false}})", false));
    REQUIRE_FALSE( reportReceived );
}

TEST_CASE( "devicetwin - returns true on complete device twin object and produces reported if something changed") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);
    std::string receivedReported{"INVALID"};
    dt.SetReportDeviceTwin([&](const std::string& reported){ receivedReported = reported; });

    REQUIRE(dt.ReceiveDeviceTwin(R"({"reported":{"Name":{"value":"","ac":null,"av":null,"ad":null},"MACAddress":"WRONG","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false}})", false));
    REQUIRE( receivedReported == R"({"Name":{"value":"","ac":null,"av":null,"ad":null},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false})");
}

TEST_CASE( "devicetwin - returns true on desired name set and produces no reported if nothing changed") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);
    bool reportReceived{false};
    dt.SetReportDeviceTwin([&](const std::string& reported){ reportReceived = true; });

    REQUIRE(dt.ReceiveDeviceTwin(R"({"desired":{"$version":99,"Name":""},"reported":{"Name":{"value":"","ac":null,"av":null,"ad":null},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false}})", false));
    REQUIRE_FALSE( reportReceived );
}

TEST_CASE( "devicetwin - returns true on desired name set and produces reported if something changed") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    DeviceTwin dt(provider);
    std::string receivedReported{"INVALID"};
    dt.SetReportDeviceTwin([&](const std::string& reported){ receivedReported = reported; });

    REQUIRE(dt.ReceiveDeviceTwin(R"({"desired":{"$version":99,"Name":"NewName!"},"reported":{"Name":{"value":"","ac":null,"av":null,"ad":null},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false}})", false));
    REQUIRE( receivedReported == R"({"Name":{"value":"NewName!","ac":200,"av":99,"ad":"Name successfully updated."},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false})");
}

TEST_CASE( "devicetwin - returns true on desired name set and produces reported if something changed but signals that name change failed") {
    auto provider = std::make_shared<MockDeviceInformationProvider>();
    provider->_setname_retVal = false;
    DeviceTwin dt(provider);
    std::string receivedReported{"INVALID"};
    dt.SetReportDeviceTwin([&](const std::string& reported){ receivedReported = reported; });

    REQUIRE(dt.ReceiveDeviceTwin(R"({"desired":{"$version":99,"Name":"NewName!"},"reported":{"Name":{"value":"","ac":null,"av":null,"ad":null},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false}})", false));
    REQUIRE( receivedReported == R"({"Name":{"value":"NewName!","ac":500,"av":99,"ad":"Name update refused."},"MACAddress":"00:01:02:03:F0:0F","Hostname":"Parrot","Type":"mock","FirmwareVersion":"Soft","Serial":"Unique","VPNConnectionActive":false})");
}




