// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <vector>
#include <doctest/doctest.h>

#include "MockIotClient.h"
#include "AzureSDKWrapper/ReliableMessageDispatcher.cpp"

TEST_CASE( "rmd - when SendReliableMessage called, callback is triggered immediately") {
    ReliableMessageDispatcher md;
    size_t callbackCalled = 0u;

    md.SendReliableMessage( [&](auto tracker){ callbackCalled++; });

    CHECK(callbackCalled == 1u);
}

TEST_CASE( "rmd - when SendReliableMessage called and successfully sent, queue is expunged on TriggerRetry()") {
    ReliableMessageDispatcher md;
    size_t callbackCalled = 0u;

    md.SendReliableMessage( [&](auto tracker){ callbackCalled++; tracker->SetState(IMessageLifeTimeTracker::DeliveryState::SentSuccessful);});

    CHECK(callbackCalled == 1u);
    CHECK(md._impl->Queue.size() == 1);

    md.TriggerRetry();

    CHECK(callbackCalled == 1u);
    CHECK(md._impl->Queue.size() == 0);
}

TEST_CASE( "rmd - when SendReliableMessage called and error occurs, retry happens on TriggerRetry()") {
    ReliableMessageDispatcher md;
    size_t callbackCalled = 0u;
    auto returnedState = IMessageLifeTimeTracker::DeliveryState::ErrorTimeout;

    md.SendReliableMessage( [&](auto tracker){ callbackCalled++; tracker->SetState(returnedState);});

    CHECK(callbackCalled == 1u);
    CHECK(md._impl->Queue.size() == 1);

    md.TriggerRetry();

    CHECK(callbackCalled == 2u);
    CHECK(md._impl->Queue.size() == 1);

    returnedState = IMessageLifeTimeTracker::DeliveryState::SentSuccessful;
    md.TriggerRetry();

    CHECK(callbackCalled == 3u);
    CHECK(md._impl->Queue.size() == 1);

    md.TriggerRetry();

    CHECK(callbackCalled == 3u);
    CHECK(md._impl->Queue.size() == 0); // expunge only happens on the next update after the SentSuccessful
}
