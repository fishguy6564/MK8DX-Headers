#pragma once

#include <cstdint>
#include "gear/Player/PlayerManager.hpp"
#include <object/Record/RecordFileManager.hpp>

namespace gear
{
    class SystemEngine
    {
    public:
        uint8_t mPad00[0x800]; // 0x00
        PlayerManager* mPlayerManager; // 0x800
        uint8_t mPad808[0x20]; // 0x808
        object::RecordFileManager* mRecordFileManagerBase; // 0x828
        uint8_t mPad830[0x180]; // 0x830
        object::RecordFileManager* mRecordFileManager; // 0x9B0 Exact same instance in 0x828

        static SystemEngine* getEngine(void);
    };
}

gear::SystemEngine* GetSystemEngine();