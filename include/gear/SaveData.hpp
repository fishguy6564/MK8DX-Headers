#pragma once

#include <cstdint>
#include "FlagAccessor.hpp"

namespace gear
{
    class SaveData
    {
    public:
        uint8_t mPad00[0x190];
        FlagAccessor mFlagAccessor;
    };

    SaveData* GetCurrentUserSaveData();
}