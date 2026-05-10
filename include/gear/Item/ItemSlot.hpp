#pragma once

#include <cstdint>

#include <gear/Actor/Actor.hpp>
#include "EItemSlot.hpp"
#include <object/Kart/KartInfoProxy.hpp>

namespace gear
{
	class ItemOwner;
	
    class ItemSlot : public Actor 
    {
        public:
            uint8_t mPad38[8]; //0x38
            uint8_t mPermissionFlags; //0x40
            uint8_t mSlotState; //0x41
            uint8_t mPreviousSlotState; //0x42
            bool mIsSlotStateChange; //0x43
            uint32_t mCurrentStateTimer; //0x44
            gear::ItemSlot* mCurrentSlot; //0x48
            uint8_t mPad50[0x18]; //0x50
            uint32_t mSlotIndex; //0x68
            uint32_t mPad6C; //0x6C
            gear::ItemOwner* mItemOwner; //0x70
            object::KartInfoProxy* mKartInfoProxy; //0x78
            uintptr_t* mSerialBuffer; //0x80
            uint32_t mSerialTotalCount; //0x88
            uint32_t mSerialCurrentCount; //0x8C
            uint32_t mSerialCountLeft; //0x90
            uint32_t mPad94; //0x94
            uint32_t mUseCountLeft; //0x98
            gear::EItemSlot mStockItem; //0x9C
            uint32_t mStockItemNum; //0xA0
            bool mIsNetRequestOK; //0xA4
            uint8_t mPadA5[3]; //0xA5
            uint32_t mNetPermissionTableCapacity; //0xA8
            uint32_t mPadAC; //0xAC
            uintptr_t* mNetPermissionTable; //0xB0
            uint8_t mNetRetrySequenceCounter; //0xB8
            uint8_t mPadB9[3];
            int32_t mManualStopTimeUntilDecide; //0xBC
            bool misSlotDecide; //0xC0
            bool mIsSlotFlash; // 0xC1
            bool mIsSlotDebug; // 0xC2
            uint8_t mPadC3; //0xC3
            gear::EItemSlot mNextItem; //0xC4
            gear::EItemSlot mCurrentItem; //0xC8
            int32_t mRotateFrames; //0xCC
            float mSlotRatio; //0xD0
            float mSlotSpeed; //0xD4

            bool isEmpty(void)const;
    };
}