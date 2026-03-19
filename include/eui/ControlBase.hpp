#pragma once

#include <cstdint>

namespace gear
{
    class UIControl;
}

namespace eui
{
    class ControlBase
	{
        public:
            virtual const char* getClassName() { return "ControlBase"; } //0x00
            virtual void GetRuntimeTypeInfo(); //0x08
            virtual ~ControlBase() = default; //0x10
            virtual void Update(float) {}; //0x18

            uintptr_t unkptr0; // 0x08
            uintptr_t* layout; //0x10
            int32_t mPad18; //0x18
            int32_t mPad20; //0x20
            int32_t mPad24; //0x24
            gear::UIControl* control; //0x28

            ControlBase();
	};
}