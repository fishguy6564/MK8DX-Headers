#pragma once

#include <cstdint>

namespace gear
{
    class PlayerInfo
    {
    public:
        uint8_t mPad00[0x1E]; // 0x00
        uint8_t mDecidedCourseId; // 0x1E
        uint8_t mPad1F[0x11]; // 0x1F

        PlayerInfo() = default;
    };
}