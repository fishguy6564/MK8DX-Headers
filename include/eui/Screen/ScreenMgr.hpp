#pragma once

#include <heap/seadDisposer.h>
#include <container/seadBuffer.h>

#include <hostio/seadHostIONode.h>

#include <prim/seadRuntimeTypeInfo.h>

#include "Screen.hpp"

namespace eui
{
    class ScreenMgr : public sead::hostio::Node
    {
    public:
        virtual ~ScreenMgr();

        static inline sead::RuntimeTypeInfo::Interface* pRTTIInstance = nullptr;

        uint8_t mPad08[0x20]; // 0x08
        sead::Buffer<Screen*> mScreenBuffer; // 0x28 - 0x38
    };
}