#pragma once

#include <cstdint>

#include "MapUnitMapObj.hpp"
#include "MapObjParameter.hpp"

namespace gear
{
    class MapObjManagerBase;
    class MapObjCreateArg
    {
    public:
        MapUnitMapObj* mUnit; // 0x00
        MapObjParameter* mParam; // 0x08
        uintptr_t mPad10; // 0x10
        MapObjManagerBase* mMapObjManager; // 0x18
        uint16_t mIndex; // 0x20;
    };
}