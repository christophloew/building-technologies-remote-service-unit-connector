// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <vector>
#include <doctest/doctest.h>

#include "MockIotClient.h"
#include "AzureSDKWrapper/MessageCollector.cpp"

TEST_CASE( "msgcol - when SendMessage called without flush, message is only sent on destruction") {
    auto mockClient = std::make_shared<MockIotHubClient>();

    {
        MessageCollector mc;
        mc.SetIotHubClient(mockClient);

        std::vector<uint8_t> msg(1024, '!');
        MessagePropertyList properties = { {"messageversion", "v0.1.0"}, { "messagetype", "asp-device"} };

        mc.SendMessage(msg, properties, false);

        REQUIRE(mockClient->SendMessageBinaryCalled.empty());

    } // destructor called here

    REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1);
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Data[0] == '!');
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messageversion"] == "v0.1.0");
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messagetype"] == "asp-device");
}

TEST_CASE( "msgcol - when SendMessage called with flush, message is sent immediately") {
    auto mockClient = std::make_shared<MockIotHubClient>();

    {
        MessageCollector mc;
        mc.SetIotHubClient(mockClient);

        std::vector<uint8_t> msg(733, '@');
        MessagePropertyList properties = { {"messageversion", "v0.3.0"}, { "messagetype", "asp-devicex"} };

        mc.SendMessage(msg, properties, true);

        REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1);
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Data[0] == '@');
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messageversion"] == "v0.3.0");
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messagetype"] == "asp-devicex");

    } // destructor called here

    REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1); // no new messages
}

TEST_CASE( "msgcol - when SendMessage called multiple times without flush, messages are queued") {
    auto mockClient = std::make_shared<MockIotHubClient>();

    {
        MessageCollector mc;
        mc.SetIotHubClient(mockClient);

        std::vector<uint8_t> msg1(733, '#');
        std::vector<uint8_t> msg2(855, '$');
        MessagePropertyList properties = { {"messageversion", "v0.3.0"}, { "messagetype", "asp-devicex"} };

        mc.SendMessage(msg1, properties, false);
        mc.SendMessage(msg2, properties, false);

        REQUIRE(mockClient->SendMessageBinaryCalled.empty());
    } // destructor called here

    REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1); // both messages
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(0) == '#');
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(732) == '#');
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(733) == '$');
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(1587) == '$');
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messageversion"] == "v0.3.0");
    REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messagetype"] == "asp-devicex");
}

TEST_CASE( "msgcol - when SendMessage called multiple times with and without flush, messages are queued/delivered") {
    auto mockClient = std::make_shared<MockIotHubClient>();

    {
        MessageCollector mc;
        mc.SetIotHubClient(mockClient);

        std::vector<uint8_t> msg1(733, '#');
        std::vector<uint8_t> msg2(855, '$');
        MessagePropertyList properties = { {"messageversion", "v0.3.0"}, { "messagetype", "asp-devicex"} };

        mc.SendMessage(msg1, properties, false);
        mc.SendMessage(msg2, properties, true);

        REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1); // both messages
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(0) == '#');
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(732) == '#');
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(733) == '$');
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(1587) == '$');
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messageversion"] == "v0.3.0");
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Props["messagetype"] == "asp-devicex");
    } // destructor called here

    REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1); // no new
}

TEST_CASE( "msgcol - when SendMessage called multiple times with large messages, messages are delivered immediately") {
    auto mockClient = std::make_shared<MockIotHubClient>();

    {
        MessageCollector mc;
        mc.SetIotHubClient(mockClient);

        std::vector<uint8_t> msg1(5733, '&');
        std::vector<uint8_t> msg2(7855, '*');
        MessagePropertyList properties = { {"messageversion", "v0.3.0"}, { "messagetype", "asp-devicex"} };

        mc.SendMessage(msg1, properties, false);

        REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1);
        
        mc.SendMessage(msg2, properties, false);

        REQUIRE(mockClient->SendMessageBinaryCalled.size() == 2);
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(0) == '&');
        REQUIRE(mockClient->SendMessageBinaryCalled[0].Data.at(5732) == '&');
        REQUIRE(mockClient->SendMessageBinaryCalled[1].Data.at(0) == '*');
        REQUIRE(mockClient->SendMessageBinaryCalled[1].Data.at(7854) == '*');
    } // destructor called here

    REQUIRE(mockClient->SendMessageBinaryCalled.size() == 2); // no new
}

TEST_CASE( "msgcol - when SendMessage called multiple times with trackers, all trackers are signalled") {
    auto mockClient = std::make_shared<MockIotHubClient>();

    struct DummyTracker : public IMessageLifeTimeTracker
    {
        void SetReference(void * ref) { m_reference = ref; }
        void * Reference() { return m_reference; }
        void SetState( IMessageLifeTimeTracker::DeliveryState state ) { m_state = state; }
        IMessageLifeTimeTracker::DeliveryState State() { return m_state; }
        void * m_reference{nullptr};
        IMessageLifeTimeTracker::DeliveryState m_state{0};
    };

    {
        MessageCollector mc;
        mc.SetIotHubClient(mockClient);

        std::vector<uint8_t> msg1(133, '#');
        std::vector<uint8_t> msg2(255, '$');
        MessagePropertyList properties = { {"messageversion", "v0.3.0"}, { "messagetype", "asp-devicex"} };

        auto trac1 = std::make_shared<DummyTracker>();
        auto trac2 = std::make_shared<DummyTracker>();

        mc.SendMessage(msg1, properties, false, trac1);
        mc.SendMessage(msg2, properties, true, trac2);

        REQUIRE(mockClient->SendMessageBinaryCalled.size() == 1);
        mockClient->SendMessageBinaryCalled[0].Tracker->SetState(IMessageLifeTimeTracker::DeliveryState::SentSuccessful);
        REQUIRE(trac1->m_state == IMessageLifeTimeTracker::DeliveryState::SentSuccessful);
        REQUIRE(trac2->m_state == IMessageLifeTimeTracker::DeliveryState::SentSuccessful);
    } // destructor called here
}
