#pragma once

#include <cstdint>

namespace gear
{
    // Forward declare
    class ItemObjBase;
    class ItemReactInfo
    {
        public:
            float mPad00; //0x00
            float mPad04; //0x04
            float mPad08; //0x08
            float mPad0C; //0x0C
            float mPad10; //0x10
            float mPad14; //0x14
            float mPad18; //0x18
            uint32_t mPad1C; // 0x1C NOTE: needs confirmation
            ItemObjBase* mItemObjBase; //0x20
            uint32_t mOwnerPlayerId; //0x28
            uint32_t mItemState; //0x2C
            uint32_t mReactType; //0x30
            uint8_t mPlayerId; //0x34
            uint8_t mPad35[0x03]; // 0x35

            ItemReactInfo();
    };
}