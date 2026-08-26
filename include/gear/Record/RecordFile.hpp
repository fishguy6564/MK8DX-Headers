#pragma once

#include <cstdint>

#include <repl/File.hpp>

namespace gear
{
    class RecordFile : public repl::File
    {
    public:
        virtual uint32_t getSystemVersion() = 0; // 0x00
        virtual void clear(); // 0x08
        virtual uint8_t getFileNameVersion() = 0; // 0x10
        virtual uint32_t getBufferCompSize(); // 0x18
        virtual void beginSave_(); // 0x20
        virtual void onEndRec_(); // 0x28
        virtual uint32_t getHeaderStructSize(); // 0x30
        
        void* mRawData; // 0x18
        uint32_t mHeaderOffset; // 0x20
        uint32_t mRawDataSize; // 0x24
        uint32_t mPad28; // 0x28
        uint32_t mPad2C; // 0x2C

        void beginLoad();
        void beginSave();

        bool checkVersion() const;
        bool endLoad(bool);
        void endSave() {}; // This is a nullsub in release
    };
}