#pragma once

#include <cstdint>

#include <prim/seadSafeString.h>

namespace gear
{
    class SaveDataFile
    {
    public:
        struct Header
        {
            uint32_t mMagic; // 0x00
            uint16_t mPad04; // 0x04
            uint16_t mPad06; // 0x06
            uint32_t mSize; // 0x08
            uint8_t mReserved[0x3C]; // 0x0C
            void* mPayload; // 0x48
        };

        struct SectionInfo {};

        uint8_t mPad00[0x58]; // 0x00
        sead::FixedSafeString<256> mFileName; // 0x58
        Header* mHeader; // 0x170
        uint32_t mPayloadSize; // 0x178

        bool load(int);
        bool save(bool, gear::SaveDataFile::SectionInfo const*);

        bool flush();
    };
}