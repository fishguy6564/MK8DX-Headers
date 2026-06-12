#pragma once

#include <cstdint>
#include <container/seadPtrArray.h>
#include <prim/seadBitFlag.h>
#include <prim/seadRuntimeTypeInfo.h>

#include <sead/basis/seadNewWrapper.hpp>

#include <enl/Peer/UniqueID.hpp>

#include "../Stream.hpp"
#include "../Buffer.hpp"

#include "IContentTransporter.hpp"
#include "../TransportManager.hpp"

/*
* Using the following resource as context or as complete implementation:
* https://github.com/EpicUsername12/mk8-cafeloader-ctcode/blob/2dd1c7d0ef0c547d7df51aaf5e32b3d9a1f764f1/include/mk8/enl/ContentTransporter.h
*/

namespace enl
{
    template <typename T>
    class ContentTransporterCommon : public IContentTransporter, public SeadGameAllocator, public SeadGameDeallocator
    {
    public:
        uint8_t mContentId; // 0x08
        uint32_t mPacketNo; // 0x0C;
        sead::PtrArray<enl::DoubleBuffer> mMessageBuffers; // 0x10
        bool mNeedsUpdate; // 0x20
        bool mIsIdleState; // 0x21
        bool mPad22; // 0x22
        bool mPad23; // 0x23
        uint32_t mPad24; // 0x24
        uint32_t mReceivedAIDBmp; // 0x28
        uint32_t mPad2C; // 0x2C
        uint8_t mSendInterval; // 0x30
        uint8_t mPad31[0x3]; // 0x31
        uint32_t mPad34; // 0x34;
        uint32_t mReceiveFlagsCount; // 0x38
        uint32_t mPad3C; // 0x3C
        uint8_t* mReceiveFlags; // 0x40
        uint32_t mHandleCount; // 0x48
        uintptr_t mHandles; // 0x50

        // VTable - 0x30
        virtual void setPacketNo(uint32_t packetNo) {
            this->mPacketNo = packetNo;
        }

        // VTable - 0x38
        virtual void send(bool needsUpdate) {
            this->mNeedsUpdate = needsUpdate & 0x01;
        }

        // VTable - 0x40
        virtual void startIdling() {
            this->mIsIdleState = true;
        }

        // VTable - 0x48
        virtual void endIdling() {
            this->mIsIdleState = false;
        }

        // VTable - 0x50
        virtual bool isIdling() {
            return this->mIsIdleState;
        }

        virtual void sendCommit() {} // VTable - 0x58

        virtual void receiveCommit(signed char const&) = 0; // VTable - 0x60

        virtual bool onCheckReceive(signed char const&, uint8_t*, uint32_t) = 0; // VTable - 0x68

        virtual void onReceived(signed char const&, uint8_t*, uint32_t) = 0; // VTable - 0x70

        virtual void onDisconnect(signed char const&,signed char const&) {}; // VTable - 0x78
        virtual void onDisconnectGone(signed char const&,signed char const&) = 0; // VTable - 0x80

        virtual uint32_t readySendStream(enl::RamWriteStream&) = 0; // VTable - 0x88
        virtual uint32_t readyReceiveStream(enl::RamReadStream&, enl::Buffer*, uint32_t) = 0; // VTable - 0x90

        virtual void setLocalPlayerNum(uint8_t) {}; // VTable - 0x98

        virtual void setSendInterval(uint8_t) = 0; // VTable - 0xA0

        virtual void resetReceive() = 0; // VTable - 0xA8

        // VTable - 0xB0
        virtual uint32_t getReceivedAIDBmp() {
            return this->mReceivedAIDBmp;
        }

        virtual bool checkReceive(signed char const&) = 0; // VTable - 0xB8

        // VTable - 0xC0
        virtual bool checkAnybodyReceive() {
            return this->mReceivedAIDBmp != 0;
        }

        virtual void onConnectInitialize() {} // VTable - 0xC8

        // VTable - 0xD0
        virtual bool isNeedCheckTwiceReceive() {
            return true;
        }

        virtual void updateSendTarget(enl::UniqueID const&,enl::UniqueID const&) {}; // VTable - 0xD8

        virtual uint64_t getLastReceiveTime(signed char const&) = 0; // VTable - 0xE0

        virtual void calcSendInterval(sead::BitFlag<ulong long> const&) = 0; // VTable - 0xE8

        virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const = 0; // VTable - 0xF0
        virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const = 0; // VTable - 0xF8

        virtual T* getMySendData() = 0; // VTable - 0x100
        virtual const T* getMySendData() const = 0; // VTable - 0x108

        virtual T* getReceiveDataByAID(signed char const&) = 0; // VTable - 0x110
        virtual T* getReceiveDataByPlayerID(signed char const&) = 0; // VTable - 0x118
        virtual T* getReceiveDataByUniqueID(enl::UniqueID const&) = 0; // VTable - 0x120

        virtual void clearAllReceivedData() = 0; // VTable - 0x128

        virtual bool checkAllReceive() = 0; // VTable - 0x130

        virtual void postInit_() {}; // VTable - 0x138

        virtual void onReceivedCore_(signed char const&,T*,uint) {}; // VTable - 0x140

        // VTable - 0x148
        virtual bool onCheckReceiveCore_(signed char const&,T*,uint) {
            return true;
        }

        virtual T* getSendData() = 0; // VTable - 0x150
        virtual const T* getSendData() const = 0; // VTable - 0x158

        ContentTransporterCommon(uint8_t contentId)();
    };
}