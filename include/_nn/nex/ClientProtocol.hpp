#pragma once

#include <cstdint>

#include <_nn/nex/Protocol.hpp>

namespace nn::nex
{
    class ProtocolCallContext;
    class Message;

    class ClientProtocol
    {
    public:
        uint8_t mPad00[0x48]; // 0x00
        uint16_t mProtocolID; // 0x48
        uint8_t mPad4A[6];    // 0x4A
        uint64_t mOutgoingConnection; // 0x50
        uint8_t mPad58[0x18]; // 0x58
        uint8_t mUseLoopback; // 0x70
        uint8_t mPad71[0x17]; // 0x71
        uint64_t mCredentials; // 0x88

        uintptr_t SendRMCMessage(ProtocolCallContext* ctx, Message* msg);
    };
}
