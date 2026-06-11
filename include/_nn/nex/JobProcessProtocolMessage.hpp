#pragma once

#include <cstdint>

#include <_nn/nex/Buffer.hpp>

namespace nn::nex
{
    class JobProcessProtocolMessage
    {
    public:
        uint8_t mPad00[0x40];    //0x00
        uint32_t mFlags;         //0x40
        uint8_t mPad44[0x9C];    //0x44
        nn::nex::Buffer* mMsgBuf;     //0xE0
    };
}
