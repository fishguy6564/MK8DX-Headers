#pragma once

#include <gear/UI/Page/UIPage.hpp>
#include <gear/UI/Flow/UIFlow_Open.hpp>

#include <cstdint>

namespace ui
{
    class Page_Login : public gear::UIPage
    {
    public:
        gear::UIFlow_Open* mFlowOpen1; // 0x1D0
        uint64_t mPad1D8; // 0x1D8
        uint32_t mPad1E0; // 0x1E0
        uint16_t mPad1E4; // 0x1E4
        uint8_t mPad1E6; // 0x1E6
        uint8_t mPad1E7; // 0x1E7
        uintptr_t mPad1E8; // 0x1E8
        uint8_t mPad1F0[8]; // 0x1F0
    };
}