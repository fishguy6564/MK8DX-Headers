#pragma once

#include <cstdint>
#include <gear/UI/UIHeap.hpp>
#include <ui/Heap_CommonInfo.hpp>

namespace ui
{
    class Heap_Common : public gear::UIHeap
    {
    public:
        Heap_CommonInfo* mCommonInfo; // 0x30
        uint8_t mPad38[0x318]; // 0x38
        ui::UICourseTex* mUICourseTex; // 0x350
    };
}