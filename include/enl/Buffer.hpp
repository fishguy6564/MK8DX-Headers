#pragma once

#include <cstdint>

#include <basis/seadTypes.h>
#include <container/seadPtrArray.h>

#include <sead/basis/seadNewWrapper.hpp>

/*
* Using the following resource as context or as complete implementation:
* https://github.com/EpicUsername12/mk8-cafeloader-ctcode/blob/2dd1c7d0ef0c547d7df51aaf5e32b3d9a1f764f1/include/mk8/enl/Buffer.h
*/

namespace enl {

    class Buffer : public SeadGameAllocator, public SeadGameDeallocator
    {
    public:
        uint8_t* mData;
        uint32_t mCapacity;
        uint32_t mSize;
        bool mIsAllocated;

        Buffer(uint8_t* data, uint32_t sz);
        void clear();
        void set(uint8_t const* data, uint32_t size);
    };

    class DoubleBuffer : public SeadGameAllocator, public SeadGameDeallocator
    {
    public:
        sead::PtrArray<enl::Buffer> mArray; // 0x00
        uintptr_t mPtrs[2]; // 0x10
        int32_t mCurrentIndex; // 0x20
        uint8_t mComitted; //0x24
        uint8_t mPad25[0x3]; // 0x28

        DoubleBuffer(int32_t numBuf, uint32_t sizeBuf) {
            this->mArray.setBuffer(numBuf, this->mPtrs);
            for (int i = 0; i < numBuf; i++) {
                enl::Buffer* buf = new enl::Buffer(nullptr, sizeBuf);
                this->mArray.pushBack(buf);
            }
            this->mCurrentIndex = 0;
        }
    };

}