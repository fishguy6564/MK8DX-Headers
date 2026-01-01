#pragma once

#include "gear/Actor/Actor.hpp"

namespace gear
{
    class PlayerManager : public Actor
    {
        public:
            char pad_18[0xB0]; //0x1C
            u32 m_local_player_amount; //0xCC
            char pad_D0[0xB8]; //0xD0
    };

    PlayerManager* GetPlayerManager();
}