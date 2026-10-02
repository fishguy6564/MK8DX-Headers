#pragma once

#include <cstdint>

#include <gear/Actor/Actor.hpp>
#include <gear/Item/ItemOwner.hpp>
#include <gear/Item/ItemObjManagerBase.hpp>

#include <math/seadVector.h>
#include <container/seadPtrArray.h>

#include "ItemEventManager.hpp"

namespace gear
{
    class ItemDirector : public Actor
    {
        public:
            sead::FixedPtrArray<ItemObjManagerBase, 19> mItemManagers; // 0x38
            sead::PtrArray<ItemOwner> mItemOwners; // 0xE0
            uintptr_t mPadF0; // 0xF0
            ItemEventManager* mItemEventManager; //0xF8

            ItemDirector();

            void emitItemKinoko(sead::Vector3<float> const&, sead::Vector3<float> const&, int32_t);
            // ItemObjBase* searchItemObj(int, int, bool);
            // ItemObjManagerBase* getItemObjManagerPtr(gear::EItemType)const;
    };
}