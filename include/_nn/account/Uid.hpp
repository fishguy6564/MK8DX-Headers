#pragma once

#include <cstdint>

namespace nn::account 
{
    struct Uid
    {
        uint64_t mHigh; // 0x00
        uint64_t mLow; // 0x08
    };
}