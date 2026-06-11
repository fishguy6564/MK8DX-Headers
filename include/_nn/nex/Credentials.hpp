#pragma once

#include <cstdint>

namespace nn::nex
{
    class Credentials
    {
    public:
        uint8_t mPad00[0x10];
    };
}
