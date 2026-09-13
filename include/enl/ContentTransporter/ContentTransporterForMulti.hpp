#pragma once

#include <enl/Buffer.hpp>
#include <enl/ContentTransporter/ContentTransporterCommon.hpp>

#include <enl/Peer/UniqueID.hpp>
#include <container/seadPtrArray.h>

namespace enl
{
    template <typename T>
    class MultiSendContent
    {
    public:
        enl::UniqueID mUniqueId;
        T mContent;
    };

    template <typename T>
    class ContentTransporterForMulti : public enl::ContentTransporterCommon<T>
    {
    public:
        enl::Buffer* mBuff1; // 0x58
        uintptr_t mPad60; // 0x60
        enl::Buffer* mBuff2; // 0x68
        sead::PtrArray<MultiSendContent<T>> mSendContent; // 0x70
    };
}