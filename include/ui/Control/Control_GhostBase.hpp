#pragma once

#include <eui/ControlBase.hpp>
#include <gear/UI/UIControlT.hpp>

#include <mush/Course/ECourseID.hpp>

#include <cstdint>

namespace ui
{
    class Control_GhostBase : public gear::UIControlT<eui::ControlBase>
    {
    public:
        mush::ECourseID mCourseId; // 0xB4
    };
}