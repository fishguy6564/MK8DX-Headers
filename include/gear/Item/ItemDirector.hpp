#pragma once

#include <cstdint>

#include <gear/Actor/Actor.hpp>
#include <gear/Item/ItemOwner.hpp>
#include <gear/Item/ItemObjManagerBase.hpp>

#include "ItemEventManager.hpp"


// #include "MK8D/Item/ItemOwner.hpp"
// #include "MK8D/Item/gearItemObjBase.hpp"
// #include "MK8D/Item/ItemEventManager.hpp"
// #include "MK8D/Item/ItemObjManagerBase.hpp"

namespace gear
{
    class ItemDirector : public Actor
    {
        public:
            uint32_t mItemManagerAmount; //0x38
            uint32_t mPad3C; //0x3C
            ItemObjManagerBase** m_itemManagerCollection; //0x40
            char pad_28[0x54];
            ItemOwner** m_item_owner_collection; //0x7C
            char pad_80[4]; //0x80
            ItemEventManager* m_item_event_manager; //0x84

            ItemDirector();
            // ItemObjBase* searchItemObj(int, int, bool);
            // ItemObjManagerBase* getItemObjManagerPtr(gear::EItemType)const;
    };
}