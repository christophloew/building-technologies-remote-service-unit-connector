// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <AzureSDKWrapper/IotHubFactory.h>
#include <Configuration/Configuration.h>
#include <spdlog/spdlog.h>
#include <thread>

using namespace std::chrono_literals;

/// @brief Null Object implementation of IotHubClient
/// Since the http code expects the IotHub handle to be available from the start
/// and since REST messages may come in while the connection to the IotHub is not yet established,
/// provide a null object implementation that forwards calls to the IotHub if connected and
/// if not, just drops the messages.
/// This class also is responsible for reading the configuration file options relating to the IotHub connection.
/// Connect() method is expected to be called from a separate thread.
class IotHubOrNull : public IIotHubClient, private NonCopyable<IotHubOrNull>
{
public:
    /// @brief Read the relevant configuration options from the provided interface and construct the IotHubFactory.
    IotHubOrNull( std::shared_ptr<Configuration> config );

    virtual ~IotHubOrNull();

    /// @brief Connect to Device Provisioning Service and to the IotHub.
    /// This will take several seconds therefore the user should call this method from a separate thread.
    bool Connect();

    /// @brief Disconnect from the IotHub.
    void Disconnect();

    /// @brief Enable/disable the Log Trace Option.
    /// @param enable if true activate the logging otherwise  disable.
    void SetLogTraceOption( const bool value );

    /// @brief Send new binary data message to IoT Hub if the client is connected, else discard the data.
    /// @param message as data list.
    /// @param properties map of key value properties.
    /// @param tracker shared pointer to object that tracks the lifetime of the message, may be null.
    void SendMessage( const MessageDataList& data,
                      const MessagePropertyList& props,
                      std::shared_ptr<IMessageLifeTimeTracker> tracker = nullptr );

    /// @brief Send new text message to IoT Hub if the client is connected, else discard the data.
    /// @param message to send.
    /// @param properties map of key value properties.
    /// @param tracker shared pointer to object that tracks the lifetime of the message, may be null.
    void SendMessage( const std::string& text,
                      const MessagePropertyList& props,
                      std::shared_ptr<IMessageLifeTimeTracker> tracker = nullptr );

    /// @brief Receive the device twin JSON object for this device if the client is connected, else do nothing.
    /// This will trigger a call to the handler set with SetDeviceTwinHandler(), so register that handler first before
    /// calling this method.
    /// @return true: success, false: error or client is not connected
    bool TriggerGetTwin();

    /// @brief Send new state of the device to IoT Hub if the client is connected, else discard the data.
    /// The state report needs to be a valid JSON object following the structure of the "reported" part of
    /// https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-devguide-device-twins
    /// @param reportedStateJson new device state.
    void SendReportedState( const std::string& reportedStateJson );

    /// @brief Set callback that is called when a remote method invocation is triggered by the Iot Hub.
    /// @param handler callback to install. Its parameters are the method name, the method argument and
    ///                its response string that should be set by the handler. The return value is the status value of the method.
    void SetMethodHandler( std::function<int( const std::string&, const std::string&, std::string& )> handler );

    /// @brief Set callback that is called when a device twin update is sent by the Iot Hub.
    /// @param handler callback to install. Its parameters are the device twin JSON object and whether this is a partial update.
    void SetDeviceTwinHandler( std::function<void( const std::string&, bool )> handler );

#if !defined( UNITTEST_PUBLIC_PIMPL )
private:
#endif
    struct IotHubOrNullImpl;
    std::shared_ptr<IotHubOrNullImpl> _impl;
};
