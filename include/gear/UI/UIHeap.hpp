#pragma once

#include <cstdint>

#include "UILoader.hpp"
#include "EUIHeapID.hpp"
#include <ui/Course/UICourseTex.hpp>

namespace gear
{
    class UIHeap
    {
    public:
        uint8_t mPad00[0x18]; //0x00
        UILoader* mUILoader;  //0x18
        uint8_t mPad20[0x330]; //0x20
        ui::UICourseTex* mUICourseTex; // 0x350

        void setID(gear::EUIHeapID);

        void load();
        void create();
        void init();

        void freeImpl_(bool);
    };

    UIHeap* GetUIHeap(gear::EUIHeapID);
}