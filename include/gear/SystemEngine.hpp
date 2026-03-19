#pragma once

#include <cstdint>
#include "gear/Player/PlayerManager.hpp"

namespace gear
{
    class SystemEngine
    {
    public:
        uint8_t mPad00[0x800]; // 0x00
        PlayerManager* mPlayerManager;

        static SystemEngine* getEngine(void);
    };
}