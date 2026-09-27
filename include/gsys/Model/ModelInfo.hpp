#pragma once

#include <cstdint>

#include "ModelUnit.hpp"

namespace gsys
{
    class ModelInfo
    {
    public:
        ModelUnit* mUnit; // 0x00;
        uint8_t mPad08[0x30]; // 0x08
    };
}