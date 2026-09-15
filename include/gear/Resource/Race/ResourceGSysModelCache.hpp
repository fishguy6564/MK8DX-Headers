#pragma once

#include <cstdint>
#include "ResourceRaceCache.hpp"

namespace gear
{
    template <typename T, typename U>
    class ResourceGSysModelCache : public ResourceRaceCache<T>
    {
    public:
        uint8_t mPad28[0x38]; // 0x28
    };
}