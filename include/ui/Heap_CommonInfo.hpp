#pragma once

#include <cstdint>

#include <ui/Cup/ECup.hpp>
#include <ui/Course/CourseInfo.hpp>

namespace ui
{
    class Heap_CommonInfo
    {
    public:
        uint8_t mPad00[0x1CB0]; // 0x00
        uint32_t mPad1CB0; // 0x1CB0
        uint8_t mPad1CB4[0xD0]; // 0x1CB4
        ECup mCupId; // 0x1D84
        CourseInfo mSelectedCourse; // 0x1D88
    };
}