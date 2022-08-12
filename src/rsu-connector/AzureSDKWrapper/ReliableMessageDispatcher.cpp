// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "ReliableMessageDispatcher.h"
#include "spdlog/spdlog.h"
#include <numeric>

struct ReliableMessageDispatcher::ReliableMessageDispatcherImpl
{
    struct DispatchItem
    {
        std::function<void( std::shared_ptr<IMessageLifeTimeTracker> )> SendFunction;
        std::shared_ptr<IMessageLifeTimeTracker> Tracker;
    };
    ReliableMessageDispatcherImpl() = default;
    ~ReliableMessageDispatcherImpl();
    void SendReliableMessage( std::function<void( std::shared_ptr<IMessageLifeTimeTracker> )> sender );
    void TriggerRetry();

    std::vector<DispatchItem> Queue;
};

ReliableMessageDispatcher::ReliableMessageDispatcherImpl::~ReliableMessageDispatcherImpl() {}

struct ReliableMessageTracker : public IMessageLifeTimeTracker
{
    void SetReference( void* reference ) { m_reference = reference; }

    void* Reference() { return m_reference; }

    void SetState( DeliveryState status ) { m_state = status; }

    DeliveryState State() { return m_state; }

private:
    void* m_reference;
    DeliveryState m_state;
};

void ReliableMessageDispatcher::ReliableMessageDispatcherImpl::SendReliableMessage(
        std::function<void( std::shared_ptr<IMessageLifeTimeTracker> )> sender )
{
    DispatchItem job{ sender, std::make_shared<ReliableMessageTracker>() };
    Queue.emplace_back( job );
    sender( job.Tracker );
}

void ReliableMessageDispatcher::ReliableMessageDispatcherImpl::TriggerRetry()
{
    size_t queueLength = Queue.size();
    auto afterLast     = std::remove_if( Queue.begin(), Queue.end(), []( auto& item ) {
        return item.Tracker->State() == IMessageLifeTimeTracker::DeliveryState::SentSuccessful;
    } );
    Queue.erase( afterLast, Queue.end() );
    spdlog::info( "ReliableMsgDispatch: {} entries expunged, left {}", queueLength - Queue.size(), Queue.size() );

    for ( auto& entry : Queue )
    {
        auto state = entry.Tracker->State();
        if ( state != IMessageLifeTimeTracker::DeliveryState::SentSuccessful &&
             state != IMessageLifeTimeTracker::DeliveryState::Sending )
        {
            entry.SendFunction( entry.Tracker );
        }
    }
}

ReliableMessageDispatcher::ReliableMessageDispatcher()
    : _impl( std::make_shared<ReliableMessageDispatcher::ReliableMessageDispatcherImpl>() )
{}

void ReliableMessageDispatcher::SendReliableMessage(
        std::function<void( std::shared_ptr<IMessageLifeTimeTracker> )> sender )
{
    _impl->SendReliableMessage( sender );
}

void ReliableMessageDispatcher::TriggerRetry()
{
    _impl->TriggerRetry();
}
