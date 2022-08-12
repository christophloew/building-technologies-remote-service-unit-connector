// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef CONNECTOR_MESSAGECOLLECTOR_H_
#define CONNECTOR_MESSAGECOLLECTOR_H_

#include "IIotHubClient.h"
#include "common/NonCopyable.h"

/// @brief Collects IotHub messages until enough have arrived to fill one unit of billing (4K)
///
/// IotHub incoming and outgoing messages are billed on units of 4K. To ensure cost efficient operation with
/// many devices, collect messages until close to 4K.
/// Text messages cannot be concatenated in every case (e.g. JSON objects) so they are not supported here.
class MessageCollector : private NonCopyable<MessageCollector>
{
public:
    /// @brief Construct a message collector.
    /// The collector will discard messages until the message sink is set up with SetIotHubClient().
    MessageCollector();

    virtual ~MessageCollector(){};

    /// @brief Set the message sink for the collector.
    /// @param client IotHubClient that serves as a message sink.
    virtual void SetIotHubClient( std::shared_ptr<IIotHubClient> client );

    /// @brief Send new binary message to the IoTHub message queue.
    /// @param message to send.
    /// @param properties map of key value properties.
    /// @param flush true to flush the message queue immediately.
    /// @param tracker Tracker instance that indicates whether message was delivered successfully or not.
    virtual void SendMessage( const MessageDataList& message,
                              const MessagePropertyList& properties,
                              bool flush,
                              std::shared_ptr<IMessageLifeTimeTracker> tracker = nullptr );

#if !defined( UNITTEST_PUBLIC_PIMPL )
private:
#endif
    struct MessageCollectorImpl;
    std::shared_ptr<MessageCollectorImpl> _impl;
};

#endif /* CONNECTOR_MESSAGECOLLECTOR_H_ */
