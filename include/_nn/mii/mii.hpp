#pragma once

#include <cstdint>

namespace nn::mii
{
    class CharInfoElement
    {
    public:
        uint8_t mPad[0x5C];
    };
}