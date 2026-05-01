#pragma once

#include <cstdint>

#include "UIFlow.hpp"

namespace gear
{
    class UIFlow_Open : public UIFlow
    {
    public:
        uint8_t mPad28[0x128]; // 0x28
    };
}