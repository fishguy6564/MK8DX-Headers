#pragma once

#include <cstdint>

#include "gear/Actor/Actor.hpp"
#include "container/seadPtrArray.h"

#include "MapObjParameter.hpp"

#include "MapObjBase.hpp"
#include "MapObjManagerBase.hpp"
#include "MapObjCreateArg.hpp"
#include "MapObjParameter.hpp"
#include "EMapObjID.hpp"

#include <container/seadBuffer.h>

namespace gear
{
    using MapObjCreatorFn = gear::MapObjBase* (*)(gear::MapObjCreateArg &);

    class MapObjDirector : public Actor
    {
    public:
        sead::Buffer<MapObjManagerBase*> mManagers; // 0x38
        uint8_t mPad48[0x08]; // 0x48
        sead::PtrArray<MapObjParameter> mMapObjParams; // 0x50

        void reactThunder();
        void loadParameter_();

        MapObjManagerBase* searchManager(gear::EMapObjID);
        MapObjParameter* getMapObjParameter(gear::EMapObjID);
        MapObjCreatorFn searchMapObjCreateFunc(gear::MapObjParameter const*);

        static bool append(gear::EMapObjID, gear::MapObjBase* (*)(gear::MapObjCreateArg &));
        static bool appendMgr(gear::EMapObjID,gear::MapObjManagerBase * (*)(gear::MapObjParameter *));
    };
}