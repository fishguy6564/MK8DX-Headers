#pragma once

#include <cstdint>

#include "EStationState.hpp"

namespace enl
{
    class ConnectInfo
    {
    public:
        uint8_t mPad00[0x08]; // 0x00
        EStationState mState; // 0x08
        uint8_t mPad0C[0x15]; // 0x0C
        int8_t mAID; // 0x21
        int8_t mPlayerIdx; // 0x22
    };
}