#pragma once

#include <cstdint>

#include <gear/UI/Page/UIPage.hpp>
#include <gear/UI/UIControl.hpp>
#include <gear/UI/UIInput.hpp>

#include <gear/UI/Flow/UIFlow.hpp>
#include <gear/UI/Flow/UIFlow_CrossFade.hpp>

namespace ui
{
    class Page_TitleSelect : public gear::UIPage
    {
    public:
        uint8_t mPad1D0[0x48]; // 0x1D0
        gear::UIFlow_CrossFade mFlowCrossFade; // 0x218
        gear::UIFlow* mBackFlow; // 0x240
        uint8_t mPad248[0x1A8]; // 0x248
        gear::UIInput* mInput; // 0x3F0
        uint8_t mPad3F8[0x50]; // 0x3F8
        gear::UIControl* mRootControl; // 0x448;
    };
}