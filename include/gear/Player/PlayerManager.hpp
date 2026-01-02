#pragma once

#include "gear/Actor/Actor.hpp"

namespace gear
{
    class PlayerManager : public Actor
    {
        public:
            uint8_t mPad38[0x140]; //0x38
            uint32_t mLocalPlayerAmount; //0x178
            uint8_t mPad17C[0xB8]; //0x17C
    };

    PlayerManager* GetPlayerManager();
}