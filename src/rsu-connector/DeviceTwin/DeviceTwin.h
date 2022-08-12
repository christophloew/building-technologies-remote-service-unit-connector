// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef CONNECTOR_DEVICE_TWIN_H_
#define CONNECTOR_DEVICE_TWIN_H_
#include <string>
#include <memory>
#include <functional>
#include <DeviceTwin/IDeviceInformation.h>

/// @brief Device Twin
///
/// Device twin contains device state information
/// including metadata, configurations, and conditions.
class DeviceTwin
{
public:
    DeviceTwin() = delete;

    /// @brief Construct a DeviceTwin instance that will fetch its reported values from the given provider.
    /// A device twin sent by the IotHub should be provided using ReceiveDeviceTwin(), and the
    /// SetReportDeviceTwin() method specifies a handler to report changed properties back to the IotHub.
    /// Note that the triggering element is the call to ReceiveDeviceTwin(), the DeviceTwin on itself will not
    /// actively poll for device information changes. If any of the device information changes, all information will be
    /// provided to the reporter callback, not just the element that actually changed..
    /// @param deviceInformationProvider Interface where the DeviceTwin can query current device information.
    DeviceTwin( std::shared_ptr<IDeviceInformation> deviceInformationProvider );

    ~DeviceTwin() = default;

    /// @brief Enter a device twin json message from the IotHub into this DeviceTwin instance.
    /// The provided JSON text will be parsed and appropriate reported properties will be generated
    /// and reported to handler set with SetReportDeviceTwin().
    /// @param json Message from the IotHub in JSON format.
    /// @param partial Partial flag as reported from the IotHub.
    /// @return true: Success, false: Error
    bool ReceiveDeviceTwin( const std::string& json, bool partial );

    /// @brief Handler for reported properties JSON
    /// This handler should send the provided text back to the IotHub to update the Device Twin there.
    /// @param reporter handler expected to send reported changes back to the IotHub.
    void SetReportDeviceTwin( std::function<void( const std::string& )> reporter );

#if !defined( UNITTEST_PUBLIC_PIMPL )
private:
#endif

    struct DeviceTwinImpl;
    std::shared_ptr<DeviceTwinImpl> _impl;
};

#endif // CONNECTOR_DEVICE_TWIN_H_
