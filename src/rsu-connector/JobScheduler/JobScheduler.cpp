// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <mutex>
#include <map>
#include <spdlog/spdlog.h>
#include "JobScheduler.h"

struct Job
{
    const std::string Name;
    std::chrono::milliseconds Interval;
    std::chrono::milliseconds CurrentTimer;
    std::function<void()> Trigger;
    bool Enabled;
};

struct JobScheduler::JobSchedulerImpl
{
    std::recursive_mutex JobLock;
    std::chrono::milliseconds TickInterval;
    std::map<std::string, Job> Jobs;
};

JobScheduler::JobScheduler( std::chrono::milliseconds tickInterval ) : _impl( std::make_shared<JobSchedulerImpl>() )
{
    _impl->TickInterval = tickInterval;
}

IJobScheduler& JobScheduler::Add( const std::string& jobName,
                                  std::chrono::milliseconds interval,
                                  std::function<void()> trigger )
{
    std::lock_guard lock( _impl->JobLock );
    _impl->Jobs.emplace( jobName, Job{ jobName, interval, interval, trigger, true } );
    return *this;
}

void JobScheduler::ChangeInterval( const std::string& jobName, std::chrono::milliseconds interval )
{
    std::lock_guard lock( _impl->JobLock );
    auto it = _impl->Jobs.find( jobName );
    if ( it != _impl->Jobs.end() )
    {
        it->second.Interval = interval;
    }
    else
    {
        throw std::invalid_argument( "Job name not found." );
    }
}

void JobScheduler::Suspend( const std::string& jobName )
{
    std::lock_guard lock( _impl->JobLock );
    auto it = _impl->Jobs.find( jobName );
    if ( it != _impl->Jobs.end() )
    {
        it->second.Enabled = false;
    }
    else
    {
        throw std::invalid_argument( "Job name not found." );
    }
}

void JobScheduler::Resume( const std::string& jobName )
{
    std::lock_guard lock( _impl->JobLock );
    auto it = _impl->Jobs.find( jobName );
    if ( it != _impl->Jobs.end() )
    {
        it->second.Enabled = true;
    }
    else
    {
        throw std::invalid_argument( "Job name not found." );
    }
}

void JobScheduler::Tick()
{
    std::lock_guard lock( _impl->JobLock );
    for ( auto& it : _impl->Jobs )
    {
        if ( !it.second.Enabled )
        {
            continue;
        }
        it.second.CurrentTimer += _impl->TickInterval;
        if ( it.second.CurrentTimer >= it.second.Interval )
        {
            try
            {
                it.second.Trigger();
            }
            catch ( std::exception& e )
            {
                spdlog::warn( "Job {} threw exception: {}", it.second.Name, e.what() );
            }
            it.second.CurrentTimer = std::chrono::milliseconds( 0 );
        }
    }
}
