#pragma once

#include <cstdint>

#include "ModelUnit.hpp"

namespace gsys
{
    class ModelInfo
    {
    public:
        ModelUnit* mUnit; // 0x00;
        uint8_t mPad08[0x16]; // 0x08
        uint8_t mFlags; // 0x1E
        uint8_t mPad1F[0x19]; // 0x1F
    };
}