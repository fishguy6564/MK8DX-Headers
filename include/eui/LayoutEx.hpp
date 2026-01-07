#pragma once

#include <cstdint>

#include <nn/ui2d/Pane.h>

namespace eui 
{
    class LayoutEx
	{
    public:
        // 0x00
        virtual void layoutExSub0();
        uintptr_t mPad08; //0x08
        uintptr_t mPad10; //0x10
        nn::ui2d::Pane* rootPane; //0x18
        uintptr_t mPad20; //0x20
        float mPad28; //0x28
        float mPad2C; //0x2C
        char pad[0x40]; 
        LayoutEx();
	};
}