// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef DEVICECONNECTOR_AZURESDKWRAPPER_IIOTHUBCLIENT_H_
#define DEVICECONNECTOR_AZURESDKWRAPPER_IIOTHUBCLIENT_H_

#include <functional>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "IMessageLifeTimeTracker.h"
#include "common/NonCopyable.h"

using MessageDataList     = std::vector<uint8_t>;
using MessagePropertyList = std::map<const std::string, const std::string>;

/// @brief Interface for the Azure IoT Hub Service Client
///
/// The IoTHubClient provides the functionality to send device status and data to the IoT Hub.
/// Furthermore there is the possibility to request and update the Device Twin.
/// Usually the correct way for this client to be constructed is by calling the IotHubClient()
/// method of the IotHubFactory which will handle initializing the Azure C SDK
/// and providing authentication details to it.
struct IIotHubClient : private NonCopyable<IIotHubClient>
{
    virtual ~IIotHubClient() = default;

    /// @brief Enable/disable the Log Trace Option.
    /// @param enable if true activate the logging otherwise disable.
    virtual void SetLogTraceOption( bool enable ) = 0;

    /// @brief Send new binary data message to IoT Hub.
    /// @param message as data list.
    /// @param properties map of key value properties.
    /// @param tracker shared pointer to object that tracks the lifetime of the message, may be null.
    virtual void SendMessage( const MessageDataList& message,
                              const MessagePropertyList& properties,
                              std::shared_ptr<IMessageLifeTimeTracker> tracker = nullptr ) = 0;

    /// @brief Send new text message to IoT Hub.
    /// @param message to send.
    /// @param properties map of key value properties.
    /// @param tracker shared pointer to object that tracks the lifetime of the message, may be null.
    virtual void SendMessage( const std::string& message,
                              const MessagePropertyList& properties,
                              std::shared_ptr<IMessageLifeTimeTracker> tracker = nullptr ) = 0;

    /// @brief Send new state of the device to IoT Hub.
    /// The state report needs to be a valid JSON object following the structure of the "reported" part of
    /// https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-devguide-device-twins
    /// @param reportedStateJson new device state.
    virtual void SendReportedState( const std::string& reportedStateJson ) = 0;

    /// @brief Set callback that is called when a remote method invocation is triggered by the Iot Hub.
    /// @param handler callback to install. Its parameters are the method name, the method argument and
    ///                its response string that should be set by the handler. The return value is the status value of the method.
    virtual void SetMethodHandler(
            std::function<int( const std::string&, const std::string&, std::string& )> handler ) = 0;

    /// @brief Receive the device twin JSON object for this device.
    /// This will trigger a call to the handler set with SetDeviceTwinHandler(), so register that handler first before
    /// calling this method.
    /// @return true: success, false: error
    virtual bool TriggerGetTwin() = 0;

    /// @brief Set callback that is called when a device twin update is sent by the Iot Hub.
    /// @param handler callback to install. Its parameters are the device twin JSON object and whether this is a partial update.
    virtual void SetDeviceTwinHandler( std::function<void( const std::string&, bool )> handler ) = 0;
};

#endif // DEVICECONNECTOR_AZURESDKWRAPPER_IIOTHUBCLIENT_H_
