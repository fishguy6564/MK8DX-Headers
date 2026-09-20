#pragma once

#include <cstdint>
#include <prim/seadRuntimeTypeInfo.h>
#include <container/seadListImpl.h>

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
            virtual sead::RuntimeTypeInfo::Interface* GetRuntimeTypeInfo(); //0x08
            virtual ~ControlBase() = default; //0x10
            virtual void Update(float) {}; //0x18

            sead::ListNode mLink; // 0x08
            int32_t mPad18; //0x18
            int32_t mPad20; //0x20
            int32_t mPad24; //0x24
            gear::UIControl* control; //0x28

            ControlBase();
	};
}