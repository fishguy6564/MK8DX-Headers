#pragma once

#include <mush/Course/ECourseID.hpp>

namespace ui
{
    class CourseInfo
    {
    public:
        mush::ECourseID mCourseId; // 0x00
        int32_t mPrefixMSBT; // 0x04
        int32_t mCourseMSBT; // 0x08
    };
}