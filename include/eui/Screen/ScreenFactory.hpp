#pragma once

#include <cstdint>

#include <heap/seadHeap.h>
#include <prim/seadRuntimeTypeInfo.h>

#include "Screen.hpp"

namespace eui
{
    class ScreenFactory
    {
    public:
        virtual ~ScreenFactory();
        virtual Screen* createScreen(sead::Heap*, int32_t);
        virtual const char* getScreenName(int32_t) const;
        virtual uint32_t getScreenNum() const;
        virtual void getDrawTargetFromDrawUnitId(signed char)const;
        virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*) const;
        virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const;
    };
}