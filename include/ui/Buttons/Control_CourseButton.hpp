#pragma once

#include "Control_Button.hpp"
#include <mush/Course/ECourseID.hpp>
#include <nn/ui2d/Pane.h>

namespace ui
{
    class Control_CourseButton : public Control_Button
    {
    public:
        mush::ECourseID mCourseId;                  // 0x3CC
        nn::ui2d::Pane* mCoursePrefixTextPane;      // 0x3D0
        nn::ui2d::Pane* mCourseNameTextPane;        // 0x3D8
        nn::ui2d::Pane* mDummyTexPane;              // 0x3E0
        nn::ui2d::Pane* mCourseTexPane;             // 0x3E8
        bool mAnimatorAltState;                     // 0x3F0
        uint8_t mPad3F1[0x7];                       // 0x3F1

        Control_CourseButton(bool);
    };
}