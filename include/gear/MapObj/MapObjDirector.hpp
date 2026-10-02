#pragma once

#include <cstdint>

#include "gear/Actor/Actor.hpp"
#include "container/seadPtrArray.h"

#include "MapObjParameter.hpp"

#include "MapObjBase.hpp"
#include "MapObjCreateArg.hpp"
#include "EMapObjID.hpp"

namespace gear
{
    class MapObjDirector : public Actor
    {
    public:
        uint8_t mPad38[0x18]; // 0x38
        sead::PtrArray<MapObjParameter> mMapObjParams; // 0x50

        void reactThunder();
        void loadParameter_();

        static bool append(gear::EMapObjID, gear::MapObjBase * (*)(gear::MapObjCreateArg &));
    };
}