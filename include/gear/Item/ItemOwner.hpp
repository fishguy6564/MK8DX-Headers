#pragma once

#include <cstdint>

#include <gear/Actor/Actor.hpp>

#include "ItemSlot.hpp"
#include "ItemObjBase.hpp"
#include "EItemSlot.hpp"

namespace gear
{
    class ItemOwner : public Actor
    {
        public:
            bool mAIsCPUItemButtonPress; //0x38
            uint8_t mPad39[3]; //0x39
            uint32_t mPad3C; //0x3C
            uint32_t mPlayerID; //0x40
            uint32_t mPad44; //0x44
            uintptr_t mKartInfoProxy; //0x48
            uint32_t mPad50; //0x50
            uint32_t mPad54; //0x54
            ItemSlot* mCurrentSlot; //0x58
            ItemSlot* mItemSlot0; //0x60
            ItemSlot* mItemSlot1; //0x68
            int32_t mSwapAutoKeepEquipDelay; //0x70
            uint32_t mPad74; //0x74
            gear::ItemObjBase* mKeepItemObj; //0x78
            gear::ItemObjBase* mEquipItemObj[8]; //0x80
            uint32_t mEquipCurrentNum; //0xC0
            uint32_t mEquipMaxNum; //0xC4
            gear::EItemSlot mEquipItemSlot; //0xC8
            bool mIsThrowTrigger; //0xCC
            uint8_t mPadCD[3]; //0xCD
            uint32_t mAnimThrowFrame; //0xD0
            uint32_t mPadD4; //0xD4
            gear::ItemObjBase* throwItemObj; //0xD8
            uint8_t mPadE0[0xC]; //0xE0
            bool mIsItemButtonPress; //0xEC
            uint8_t mPadED[3]; //0xED
            int32_t mSwapUseDelay; //0xF0
            bool mItemEndsByUseCount; //0xF4
            uint8_t mPadF5[3]; //0xF5
            uint32_t mUseCount; //0xF8
            uint32_t mUseCountMax; //0xFC
            bool mIsItemTimerActive; //0x100
            uint8_t mPad101[3]; //0x101
            uint32_t mUseTimeLeft; //0x104
            uint32_t mUseTimeMax; //0x108
            uint16_t mSerial; //0x10C
            uint16_t mPad10E; //0x10E
            sead::Vector3f mHandItemAnim; //0x110
            bool mIsHaveHandItem; //0x11C
            uint8_t mPad11D[3]; //0x11D
            uint8_t mPad120[0x80]; //0x120

            uint32_t getCurrentSlot();
            void pushSerial(int, unsigned short);
            void setNewSerial(unsigned short, bool);
            void execEvent_SlotClear(unsigned char);

            void startSlot(int, gear::EItemSlot, bool)const;
            void decideSlot(int);
            void clearSlot(int,bool);
    };
}
