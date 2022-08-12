// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <vector>
#include <string>
#include <functional>
#include "AzureSDKWrapper/IIotHubClient.h"

struct MockIotHubClient : public IIotHubClient
{
    struct TestMsgEntry
    {
        MessageDataList Data;
        MessagePropertyList Props;
        std::shared_ptr<IMessageLifeTimeTracker> Tracker;
    };
    struct TestTextEntry
    {
        std::string Data;
        MessagePropertyList Props;
        std::shared_ptr<IMessageLifeTimeTracker> Tracker;
    };
    std::vector<TestMsgEntry> SendMessageBinaryCalled;
    std::vector<TestTextEntry> SendMessageStringCalled;
    
	void SetLogTraceOption(bool enable) { SetLogTraceOptionCalled++; }

	void SendMessage(const MessageDataList& message, const MessagePropertyList& properties, std::shared_ptr<IMessageLifeTimeTracker> tracker)
    {
        SendMessageBinaryCalled.push_back( TestMsgEntry{ message, properties, tracker} );
    }

	void SendMessage(const std::string& message, const MessagePropertyList& properties, std::shared_ptr<IMessageLifeTimeTracker> tracker)
    {
        SendMessageStringCalled.push_back( TestTextEntry{ message, properties, tracker} );
    }

	void SendReportedState(const std::string& reportedStateJson) {
        SendReportedStateCalled++;
        ReportedState = reportedStateJson;
    }

	void SetMethodHandler( std::function<int(const std::string&, const std::string&, std::string&)> handler ) {SetMethodHandlerCalled++;}
	void SetDeviceTwinHandler( std::function<void(const std::string&,bool)> handler ) {SetDeviceTwinHandlerCalled++;}
    bool TriggerGetTwin() { GetDeviceTwinCalled++; return false; } 
    uint32_t GetDeviceTwinCalled{0};
    uint32_t SendReportedStateCalled{0};
    uint32_t SetMethodHandlerCalled{0};
    uint32_t SetDeviceTwinHandlerCalled{0};
    uint32_t SetLogTraceOptionCalled{0};
    std::string ReportedState;
};
