#pragma once

#include <cstdint>

namespace gear
{
    struct ItemEventContent
    {
        uint8_t mPad00; //0x00
        uint8_t mPad01; //0x01
        uint16_t mItemSerial; //0x02
        char mPad04[0xFC];
    };
}