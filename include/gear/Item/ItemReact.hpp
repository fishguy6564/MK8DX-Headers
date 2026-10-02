#pragma once

#include <cstdint>

#include "Obj/ItemObjBase.hpp"
#include "EItemType.hpp"

namespace gear
{
    class ItemReact
    {
    public:
        EItemType getType() const;
        bool isEntry() const;
        bool isSelfMove() const;
        bool isEquip() const;
        bool isStand() const;
        bool isBurst() const;

        int32_t getOwnerID() const;
        
        ItemObjBase* mItemObj; // 0x00
    };
}