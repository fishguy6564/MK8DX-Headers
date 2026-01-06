#pragma once

#include <cstdint>

#include <gear/Actor/Actor.hpp>

namespace gear
{
    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class ItemSlot : public Actor 
    {
        public:
            char pad_18[0x20]; //0x18
            u32 mSlotNumber; //0x38
            char pad_3C[0x50]; //0x3C

            bool isEmpty(void)const;
    };
}