#pragma once

#include "gear/Actor/Actor.hpp"

namespace gear
{
    class PlayerManager : public Actor
    {
        public:
            char mPad18[0xB0]; //0x1C
            u32 mLocalPlayerAmount; //0xCC
            char mPadD0[0xB8]; //0xD0
    };

    PlayerManager* GetPlayerManager();
}