#pragma once

#include <eui/ControlBase.hpp>

#include <gear/UI/UIControl.hpp>
#include <gear/UI/UIInput_Key.hpp>
#include <gear/UI/Input/UIInput_Touch.hpp>

#include <heap/seadDisposer.h>

namespace ui
{
    class Control_Button : public eui::ControlBase, public gear::UIControl, sead::IDisposer
    {
    public:
        gear::UIInput_Key mInputKey;        // 0xD8
        gear::UIInput_Touch mInputTouch;    // 0x108
        uint64_t mStateFlags;               // 0x158
        uint32_t mPad160;                   // 0x160
        float mPad164;                      // 0x164
        uintptr_t mPad168;                  // 0x168
        uintptr_t mPad170;                  // 0x170
        uint32_t mPad178;                   // 0x178
        uint8_t mPad17C[0x24C];             // 0x17C
        uint16_t mPad3C8;                   // 0x3C8
        bool mPad3CA;                       // 0x3CA
    };
}