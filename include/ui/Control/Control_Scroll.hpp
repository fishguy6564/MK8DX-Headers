#pragma once

#include <cstdint>

#include <gear/UI/UIControlT.hpp>
#include <eui/ControlBase.hpp>

namespace ui
{
    class Control_Scroll : public gear::UIControlT<eui::ControlBase>
    {
        public:

            class Item
            {
                public:
                    uint8_t mPad00[0x18]; //0x00
                    void set(uint8_t,unsigned long long,bool,bool);;
            };

            uint32_t mPadB4; // 0xB4
            uint32_t mItemStride; // 0xB8
            uint32_t mCounterBC; //0xBC
            Item* mItemList; //0xC0
            uint8_t mPadC8[0x172]; //0xC8
            uint8_t mPad23A; // 0x23A
            uint8_t mPad23B; // 0x23B
            uint8_t mPad23C[0x9C]; // 0x23C
            uint32_t* mTitleList; //0x2D8!
            int32_t mSize; // 0x2E0
            int32_t mCapacity; // 0x2E4
            uintptr_t** mContentList; //0x2E8
            int32_t mTitleCount; //0x2F0 #
            int32_t mOptionCount; //0x2F4 #
            uint32_t mPad2F8; //0x2F8
            uint32_t mCounter1; //0x2FC
            uint32_t mCounter2; //0x300
            uint8_t mPad304[0x14]; //0x304

            // u32 pad_64; //0x64
            // u32 pad_68; //0x68
            // u32 m_counter_6C; //0x6C
            // Item* m_itemList; //0x70
            // u8 pad_74[0x1B0]; //0x74
            // u32* m_titleList; //0x224
            // s32 m_size; //0x228
            // s32 m_capacity; //0x22C
            // void** m_ContentList; //0x230
            // u32 m_titleCount; //0x234
            // s32 m_optionCount; //0x238
            // u32 pad_23C; //0x23C
            // u32 m_counter1; //0x240
            // u32 m_counter2; //0x244
            // u8 pad_248[0x10]; //0x248
    }; //Size 0x318
}
