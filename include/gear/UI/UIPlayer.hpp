#pragma once
#include <cstdint>

namespace gear
{
    class UIPlayer
    {
    public:
        virtual ~UIPlayer();

        uint32_t mPlayerId; // 0x08
        uint32_t mPad0C; // 0x0C
        uint32_t mInputs; // 0x10
        uint32_t mPad14; // 0x14
        uint32_t mPad18; // 0x18
        uint32_t mPad1C; // 0x1C
        uint32_t mPad20; // 0x20
        uint32_t mPad24; // 0x24
        uint8_t mPad28[0xF0]; // 0x28
        bool mPad118; // 0x118
        uint8_t mPad119[3]; // 0x119
        uint32_t mPad11C; // 0x11C
        uint32_t mPad120; // 0x120
        uint8_t mPad124[0xF0]; // 0x124
        uint64_t mPad214; // 0x214
        uint16_t mPad21C; // 0x21C
        uint16_t mPad21E; // 0x21E
        uint32_t mPad220[16]; // 0x220
        float mPad260[24]; // 0x260
        uint32_t mPad2C0; // 0x2C0
        uint16_t mPad2C4; // 0x2C4
        uint16_t mPad2C6; // 0x2C6
    };

    UIPlayer* GetUIPlayer(uint);
}