#pragma once

#include <cstdint>

#include <_nn/nex/Protocol.hpp>

namespace nn::nex
{
    class CallContext
    {
    public:
        uint8_t mPad00[0x14];         //0x00
        ECallContextState mState;     //0x14
        uint32_t mCallID;             //0x18
        uint8_t mPad1C[0x14];         //0x1C

        bool Wait(uint32_t timeoutMs);
    };
}
