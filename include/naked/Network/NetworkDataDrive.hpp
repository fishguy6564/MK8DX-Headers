#pragma once

#include <cstdint>

class NetworkDataDrive
{
public:
    uint8_t mPad00[0x42]; // 0x00
    uint8_t mPad42; // 0x42
    uint8_t mPad43; // 0x43
};
static_assert(sizeof(NetworkDataDrive) == 0x44, "Bad size for NetworkDataDrive!");