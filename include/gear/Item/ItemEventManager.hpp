#pragma once

#include <cstdint>

#include <math/seadVector.hpp>
#include <container/seadRingBuffer.h>

#include "ItemEvent.hpp"

// #include "MK8D/Item/ItemEvent.hpp"
// #include "MK8D/Item/EItemSlot.hpp"
// #include "MK8D/Item/EItemType.hpp"
// #include "MK8D/Item/gearItemReactInfo.hpp"

typedef unsigned char uchar;

namespace gear
{
    class ItemEventManager
    {
        public:
            virtual void test1();
            virtual void test2();
            uint8_t pad_04[0x18];
            uint32_t mCurrentBufferSize; //0x1C
            uint32_t mBufferMaximum; //0x20
            ItemEvent** m_itemEventBuffer; //0x24


            ItemEventManager();

            void pushEvent_SlotDrop(int);
            void pushEvent_SlotClear(int,uchar);
            // void pushEvent_HitKart(gear::ItemReactInfo const&, bool);
            // void pushEvent_SlotRotate(int,uchar,gear::EItemSlot,bool);
            // void pushEvent_SlotDecide(int, unsigned char, gear::EItemSlot);
            // void pushEvent_ObjDrop(int,gear::EItemType,sead::Vector3<float> const&,sead::Vector3<float> const&);

            // void execEvent_SlotDrop_(gear::ItemEvent *);
            // void execEvent_SlotClear_(gear::ItemEvent *);
    };
}