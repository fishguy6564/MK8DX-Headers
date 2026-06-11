#pragma once

#include <cstdint>

namespace nn::nex
{
    class Message;
    class ProtocolCallContext;

    enum ECallContextState : uint32_t
    {
        Init = 0,
        Sent = 1,
        InProgress = 2,
        Error = 3,
        Completed = 4,
        Cancelled = 5
    };

    namespace Protocol
    {
        enum _Command : uint8_t
        {
            CommandRequest = 1,
            CommandResponse = 2
        };

        bool RegisterCallContext(Message* msg, ProtocolCallContext* ctx);
        void AddMethodID(Message* msg, uint32_t methodId);
    };
}
