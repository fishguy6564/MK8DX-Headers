#pragma once

#include <cstdint>

#include <hostio/seadHostIONode.h>
#include <prim/seadRuntimeTypeInfo.h>

namespace gear
{
    class XLinkSlotState
    {
    public:
        virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const; //0x00
        virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const; //0x08
        virtual ~XLinkSlotState();
        virtual void reset();

        uint8_t mPad08[0xB30]; // 0x00
    };
}