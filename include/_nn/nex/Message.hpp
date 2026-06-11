#pragma once

#include <cstdint>

#include <_nn/nex/ProtocolRequestBrokerInterface.hpp>

namespace nn::nex
{
    class Message : public ProtocolRequestBrokerInterface
    {
    public:
        uint8_t mPad1C[0x74]; 

        Message();
        ~Message();
        uintptr_t GetBuffer();
    };
}
