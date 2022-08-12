// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef DEVICECONNECTOR_JOBSCHEDULER_IJOBSCHEDULER_H_
#define DEVICECONNECTOR_JOBSCHEDULER_IJOBSCHEDULER_H_
#include <memory>
#include <string>
#include <chrono>
#include <functional>

/// @brief This interface class provides a way to schedule tasks in regular intervals.
/// The user is expected to call the Tick() method once each interval.
/// See the specific implementation for usage and notes.
class IJobScheduler
{
public:
    virtual ~IJobScheduler() = default;

    /// @brief Signal a passed tick interval to the scheduler, executing all tasks that are due.
    /// This method is expected to be called regularily by the user.
    virtual void Tick() = 0;

    /// @brief Add a task to the list of tasks that will be executed.
    /// @param jobName Name to refer to the task. A task will replace an existing one if the same name is reused.
    /// @param interval Interval that the task should be triggered in once.
    /// @param trigger trigger functional to call to run the task.
    /// @return Reference to this instance so calls can be chained.
    virtual IJobScheduler& Add( const std::string& jobName,
                                std::chrono::milliseconds interval,
                                std::function<void()> trigger ) = 0;

    /// @brief Change the scheduling interval of a task.
    /// @param jobName Name of the job to change, will throw an invalid argument exception if no such task is registered.
    /// @param newInterval New interval for this task.
    virtual void ChangeInterval( const std::string& jobName, std::chrono::milliseconds newInterval ) = 0;

    /// @brief Suspend the execution of the task.
    /// Will not do anything if the task is already suspended.
    /// @param jobName Name of the job to suspend, will throw an invalid argument exception if no such task is registered.
    virtual void Suspend( const std::string& jobName ) = 0;

    /// @brief Resume the execution of the task.
    /// @param jobName Name of the job to resume, will throw an invalid argument exception if no such task is registered.
    virtual void Resume( const std::string& jobName ) = 0;
};

using JobSchedulerHandle = std::shared_ptr<IJobScheduler>;

#endif // DEVICECONNECTOR_JOBSCHEDULER_IJOBSCHEDULER_H_
