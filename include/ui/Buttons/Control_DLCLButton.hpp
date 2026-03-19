#pragma once

#include "eui/ControlBase.hpp"
#include "gear/UI/UIControl.hpp"
#include "gear/UI/Input/UIInput_Touch.hpp"

namespace ui
{
    class Control_DLCLButton : public eui::ControlBase, public gear::UIControl
    {
    public:
        uintptr_t mPadB8; // 0xB8
        gear::UIInput_Touch mTouchInput; // 0xC0
        uint32_t mPad110; // 0x110
        bool mShouldTrigger; // 0x114
        uint8_t mPad115[3]; // 0x115

        Control_DLCLButton();

        void bindInput(nn::ui2d::Pane* pane, uint32_t keyBinds);
    };
}