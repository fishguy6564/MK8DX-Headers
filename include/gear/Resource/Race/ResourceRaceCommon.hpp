#pragma once

#include <cstdint>
#include "ResourceRaceCache.hpp"
#include "ResourceGSysModelCache.hpp"

#include "ResourceRaceCacheIndex.hpp"

#include "ERaceCommonType.hpp"
#include "ERaceGearType.hpp"
#include "ERaceLightType.hpp"
#include "ERaceScrewType.hpp"

namespace gear
{
    class ResourceRaceCommon : public ResourceRaceCache<ERaceCommonType>
    {
    public:
        uintptr_t mPad28; // 0x28
        ResourceGSysModelCache<ERaceGearType, ResourceRaceCacheIndex<ERaceGearType>> mGearCache; // 0x30
        ResourceGSysModelCache<ERaceScrewType, ResourceRaceCacheIndex<ERaceScrewType>> mScrewCache; // 0x90
        ResourceGSysModelCache<ERaceLightType, ResourceRaceCacheIndex<ERaceLightType>> mLightCache; // 0xF0
    };
}