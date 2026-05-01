#pragma once

#include <cstdint>
#include "Control_Button.hpp"

namespace ui
{
    class Control_BackButton : public Control_Button
    {
    public:
        uint8_t mPad3CB[0xD]; // 0x3CB
        bool mPad3D8; // 0x3D8
        bool mPad3D9; // 0x3D9
    };

    Control_BackButton* GetBackButton();
}