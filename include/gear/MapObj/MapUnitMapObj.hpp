#pragma once

#include <cstdint>
#include <gear/Byaml/ByamlIter.hpp>

#include <container/seadPtrArray.h>

namespace gear
{
    class MapUnitMapObj
    {
    public:
        virtual void loadByaml(gear::ByamlIter const&);
        int32_t mUnitIdNum; // 0x08
        uint16_t mObjId; // 0x0C
        uint16_t mPad0E; // 0x0E
        uint8_t mPad10[0x98]; // 0x10
        sead::PtrArray<MapUnitMapObj> mTargets; // 0xA8
        uint16_t mFlags; // 0xB8
    };
}