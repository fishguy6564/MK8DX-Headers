#pragma once

#include <mush/Course/ECourseID.hpp>
#include <prim/seadSafeString.h>

namespace ui
{
    class CourseInfo
    {
    public:
        mush::ECourseID mCourseId; // 0x00
        int32_t mPrefixMSBT; // 0x04
        int32_t mCourseMSBT; // 0x08

        bool mIsDLC; // 0x0C
        uint8_t mPad0D[0x3]; // 0x0D

        sead::FixedSafeString<64> mCourseIconResource;

        inline CourseInfo(void) : mCourseId(-1) {
            mPrefixMSBT = -1;
            mCourseMSBT = -1;

            mIsDLC = false;
            mPad0D[0] = 0;
            mPad0D[1] = 0;
            mPad0D[2] = 0;
        }
    };
}