// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "MessageCollector.h"
#include "spdlog/spdlog.h"
#include <numeric>

struct MessageCollector::MessageCollectorImpl
{
    MessageCollectorImpl() = default;
    ~MessageCollectorImpl();

    void FlushMessage();
    std::shared_ptr<IIotHubClient> Client;
    MessagePropertyList CurrentProperties;
    MessageDataList CurrentData;
    size_t CurrentPropertiesSize{ 0u };
    size_t MaxMessageSize{ 4096u };
    std::vector<std::shared_ptr<IMessageLifeTimeTracker>> CurrentTrackers;
    std::vector<std::shared_ptr<IMessageLifeTimeTracker>> PendingTrackers;
};

MessageCollector::MessageCollectorImpl::~MessageCollectorImpl()
{
    FlushMessage();
}

class CumulatedMessageTracker : public IMessageLifeTimeTracker
{
public:
    CumulatedMessageTracker( std::vector<std::shared_ptr<IMessageLifeTimeTracker>>& from )
    {
        PendingTrackers.swap( from );
    }
    ~CumulatedMessageTracker() {}

    void SetReference( void* ref ) { m_reference = ref; }
    void* Reference() { return m_reference; }
    void SetState( DeliveryState state )
    {
        m_state = state;
        for ( auto& item : PendingTrackers )
        {
            item->SetState( state );
        }
    }
    DeliveryState State() { return m_state; }

private:
    std::vector<std::shared_ptr<IMessageLifeTimeTracker>> PendingTrackers;
    void* m_reference;
    DeliveryState m_state;
};

void MessageCollector::MessageCollectorImpl::FlushMessage()
{
    if ( !Client.get() )
    {
        spdlog::warn( "MessageCollector: flush ignored, no message sink set." );
        return;
    }

    // clear message trackers that have received a response, releasing their smart pointers
    auto afterLast = std::remove_if( PendingTrackers.begin(), PendingTrackers.end(), []( auto& item ) {
        return item->State() != IMessageLifeTimeTracker::DeliveryState::Sending;
    } );
    PendingTrackers.erase( afterLast, PendingTrackers.end() );

    if ( !CurrentData.empty() )
    {
        spdlog::info( "MessageCollector: flushing message, size {}", CurrentData.size() );
        PendingTrackers.push_back( std::make_shared<CumulatedMessageTracker>( CurrentTrackers ) );
        Client->SendMessage( CurrentData, CurrentProperties, PendingTrackers.back() );
        CurrentProperties.clear();
        CurrentPropertiesSize = 0u;
        CurrentData.clear();
    }
}

MessageCollector::MessageCollector() : _impl( std::make_shared<MessageCollector::MessageCollectorImpl>() ) {}

void MessageCollector::SetIotHubClient( std::shared_ptr<IIotHubClient> client )
{
    _impl->Client = client;
}

void MessageCollector::SendMessage( const MessageDataList& message,
                                    const MessagePropertyList& properties,
                                    bool flush,
                                    std::shared_ptr<IMessageLifeTimeTracker> tracker )
{
    if ( !_impl->Client.get() )
    {
        if ( tracker )
        {
            tracker->SetState( IMessageLifeTimeTracker::DeliveryState::ErrorNoSink );
        }
        spdlog::warn( "MessageCollector: message discarded, no message sink set." );
        return;
    }

    size_t size          = message.size() + _impl->CurrentPropertiesSize + _impl->CurrentData.size();
    bool messageConsumed = false;

    // Merge the current message if the properties match
    if ( ( flush || message.size() >= _impl->MaxMessageSize ) &&
         ( properties == _impl->CurrentProperties || properties.empty() ) )
    {
        _impl->CurrentData.insert( _impl->CurrentData.end(), message.begin(), message.end() );
        if ( tracker )
        {
            _impl->CurrentTrackers.push_back( tracker );
        }
        messageConsumed = true;
    }

    if ( flush || size > _impl->MaxMessageSize )
    {
        _impl->FlushMessage();
    }

    if ( messageConsumed )
        return;

    if ( _impl->CurrentProperties.empty() || properties != _impl->CurrentProperties )
    {
        if ( _impl->CurrentPropertiesSize )
        {
            spdlog::warn( "MessageCollector: message properties do not match" );
        }
        _impl->CurrentProperties.insert( properties.begin(), properties.end() );
        _impl->CurrentPropertiesSize = std::accumulate(
                _impl->CurrentProperties.begin(),
                _impl->CurrentProperties.end(),
                0u,
                []( auto& a, auto& b ) { return a + std::get<0>( b ).size() + std::get<1>( b ).size(); } );
    }

    _impl->CurrentData.insert( _impl->CurrentData.end(), message.begin(), message.end() );

    if ( tracker )
    {
        _impl->CurrentTrackers.push_back( tracker );
    }

    // Only reached when properies did not match above
    if ( flush || _impl->CurrentPropertiesSize + _impl->CurrentData.size() >= _impl->MaxMessageSize )
    {
        _impl->FlushMessage();
    }
}
