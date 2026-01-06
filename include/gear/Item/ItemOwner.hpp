#pragma once

#include <cstdint>

#include <gear/Actor/Actor.hpp>

#include "ItemSlot.hpp"

namespace gear
{
    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class ItemOwner : public Actor
    {
        public:
            uint8_t pad_1C[0x14]; //0x1C
            ItemSlot* mCurrentSlot; //0x30
            ItemSlot* mItemSlot0; //0x34
            ItemSlot* mItemSlot1; //0x38
            uint8_t pad_3C[0x6C]; //0x3C
            uint16_t m_itemSerial; //0xA8
            uint16_t pad_AA; //0xAA
            uint8_t pad_AC[0x50];

            uint32_t getCurrentSlot();
            void pushSerial(int, unsigned short);
            void setNewSerial(unsigned short, bool);
            void execEvent_SlotClear(unsigned char);

            // void startSlot(int, gear::EItemSlot, bool)const;
            void decideSlot(int);
            void clearSlot(int,bool);
    };
}