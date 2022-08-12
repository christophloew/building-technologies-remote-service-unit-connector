// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef CONNECTOR_RELIABLEMESSAGEDISPATCHER_H_
#define CONNECTOR_RELIABLEMESSAGEDISPATCHER_H_

#include "IIotHubClient.h"
#include "common/NonCopyable.h"

/// @brief Ensures reliable message delivery by retrying until successful.
class ReliableMessageDispatcher : private NonCopyable<ReliableMessageDispatcher>
{
public:
    /// @brief Construct a reliable message dispatcher instance.
    ReliableMessageDispatcher();

    virtual ~ReliableMessageDispatcher() = default;

    /// @brief Queue a message for reliable sending using the given send function.
    /// @param sender function that does the sending.
    virtual void SendReliableMessage( std::function<void( std::shared_ptr<IMessageLifeTimeTracker> )> sender );

    /// @brief Trigger retries for messages that have not been delivered yet.
    /// Also purges already sent messages from the internal queue.
    virtual void TriggerRetry();

#if !defined( UNITTEST_PUBLIC_PIMPL )
private:
#endif

    struct ReliableMessageDispatcherImpl;
    std::shared_ptr<ReliableMessageDispatcherImpl> _impl;
};

#endif /* CONNECTOR_RELIABLEMESSAGEDISPATCHER_H_ */
