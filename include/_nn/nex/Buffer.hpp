#pragma once

#include <cstdint>

namespace nn::nex
{
    class Buffer
    {
    public:
        uint8_t mPad00[0x10]; // 0x00
        uint8_t* mDataPtr;    // 0x10
        uint64_t mDataLen;    // 0x18
        uint8_t mPad20[0x8];  // 0x20
        uint64_t mReadOff;    // 0x28
    };
}
