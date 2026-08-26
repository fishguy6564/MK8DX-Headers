#pragma once

#include "gear/Actor/Actor.hpp"
#include "Player.hpp"

#include <container/seadPtrArray.h>

namespace gear
{
    class PlayerManager : public Actor
    {
        public:
            uint8_t mPad38[0x18]; //0x38
            sead::PtrArray<Player> mPlayers; // 0x50
            uint8_t mPad60[0x118]; // 0x60
            uint32_t mLocalPlayerAmount; //0x178
            uint8_t mPad17C[0xB8]; //0x17C

            bool isInputBlocked(void) const;
    };

    PlayerManager* GetPlayerManager();
}