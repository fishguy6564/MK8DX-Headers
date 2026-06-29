#pragma once

#include <cstdint>

#include "gear/UI/Page/UIPage.hpp"
#include "gear/UI/Flow/UIFlow_Open.hpp"

#include "ui/Buttons/Control_CourseButton.hpp"

namespace ui
{
    class Page_CourseBattle : public gear::UIPage
    {
    public:
        gear::UIFlow_Open mFlowOpen1; // 0x1D0
        gear::UIFlow mFlow1; // 0x320
        gear::UIFlow_Open mFlowOpen2; // 0x348
        uint8_t mPad498[0x30]; // 0x498
        gear::UIControl* mLayoutParent; // 0x4C8
        Control_CourseButton* mCourseButtons[8]; // 0x4D0
    };
}