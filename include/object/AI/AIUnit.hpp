#pragma once

#include <cstdint>
#include <gear/AI/AIPathHandler.hpp>

namespace object
{
    class AIUnit
    {
    public:
        uint8_t mPad00[0x68]; // 0x00
        gear::AIPathHandler* mAIPathHandler; // 0x68
    };
}