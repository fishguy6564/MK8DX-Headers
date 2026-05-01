#pragma once

#include <cstdint>

#include "UILoader.hpp"
#include "EUIHeapID.hpp"
#include <heap/seadExpHeap.h>
#include <ui/Course/UICourseTex.hpp>
#include <ui/Heap_CommonInfo.hpp>

namespace gear
{
    class UIHeap
    {
    public:
        uint8_t mPad00[0x10]; //0x00
        sead::Heap* mHeap; // 0x10
        UILoader* mUILoader;  //0x18
        uint8_t mPad20[0x10]; //0x20

        void setID(gear::EUIHeapID);

        void load();
        void create();
        void init();

        void freeImpl_(bool);
    };

    UIHeap* GetUIHeap(gear::EUIHeapID);
}