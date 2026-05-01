#pragma once

#include <math/seadVector.hpp>

#include "gear/UI/Page/UIPage.hpp"
#include "gear/UI/Flow/UIFlow_Open.hpp"

namespace ui
{
    class Page_BGMTest : public gear::UIPage
    {
    public:
        uint8_t mPad1D0[0xCD4]; // 0x1D0
        uint32_t mPageState; // 0xEA4

        void updateCupUI(bool shouldChangeCup);
        void updateDLCCupUI(bool shouldChangeCup);
    };
}