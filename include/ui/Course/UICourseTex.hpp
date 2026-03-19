#pragma once

#include <mush/Course/ECourseID.hpp>
#include <_nn/ui2d/TextureInfo.h>

namespace ui
{
    class UICourseTex
    {
    public:
        nn::ui2d::TextureInfo* getTex(mush::ECourseID, bool)const;
    };
}