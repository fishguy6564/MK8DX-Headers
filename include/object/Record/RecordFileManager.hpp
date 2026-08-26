#pragma once

#include <cstdint>
#include <object/Record/RecordFileKart.hpp>
#include <container/seadPtrArray.h>

namespace object
{
    class RecordFileManager
    {
    public:
        uint8_t mPad00[0x40];
        sead::PtrArray<RecordFileKart> mFileKartRecords;

        RecordFileKart* getRecordFileKart(int);
    };
}