#pragma once

#include <cstdint>
#include <container/seadPtrArray.h>
#include <prim/seadBitFlag.h>
#include <prim/seadRuntimeTypeInfo.h>

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
    class ContentTransporterCommon : public IContentTransporter
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
        uint8_t mSendInterval // 0x30
        uint8_t mPad31[0x3]; // 0x31
        uint32_t mPad34; // 0x34;
        uint32_t mReceiveFlagsCount; // 0x38
        uint32_t mPad3C; // 0x3C
        uint8_t* mReceiveFlags; // 0x40
        uint32_t mHandleCount; // 0x48
        uintptr_t mHandles; // 0x50

        virtual void setPacketNo(uint32_t packetNo) {
            this->mPacketNo = packetNo;
        }

        virtual void send(bool needsUpdate) {
            this->mNeedsUpdate = needsUpdate & 0x01;
        }

        virtual void startIdling() {
            this->mIsIdleState = true;
        }

        virtual void endIdling() {
            this->mIsIdleState = false;
        }

        virtual bool isIdling() {
            return this->mIsIdleState;
        }

        virtual void sendCommit() {}

        virtual void receiveCommit(signed char const&) = 0;

        virtual bool onCheckReceive(signed char const&, uint8_t*, uint32_t) = 0;

        virtual void onReceived(signed char const&, uint8_t*, uint32_t) = 0;

        virtual void onDisconnect(signed char const&,signed char const&) {};
        virtual void onDisconnectGone(signed char const&,signed char const&) = 0;

        virtual uint32_t readySendStream(enl::RamWriteStream&) = 0;
        virtual uint32_t readyReceiveStream(enl::RamReadStream&, enl::Buffer*, uint32_t) = 0;

        virtual void setLocalPlayerNum(uint8_t) {};

        virtual void setSendInterval(uint8_t) = 0;

        virtual void resetReceive() = 0;

        virtual uint32_t getReceivedAIDBmp() {
            return this->mReceivedAIDBmp;
        }

        virtual bool checkReceive(signed char const&) = 0;

        virtual bool checkAnybodyReceive() {
            return this->mReceivedAIDBmp != 0;
        }

        virtual bool onConnectInitialize() {}

        virtual bool isNeedCheckTwiceReceive() {
            return true;
        }

        virtual void updateSendTarget(enl::UniqueID const&,enl::UniqueID const&) {};

        virtual uint64_t getLastReceiveTime(signed char const&) = 0;

        virtual void calcSendInterval(sead::BitFlag<ulong long> const&) = 0;

        virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const = 0;
        virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const = 0;

        virtual T* getMySendData() = 0;
        virtual const T* getMySendData() const = 0;

        virtual T* getReceiveDataByAID(signed char const&) = 0;
        virtual T* getReceiveDataByPlayerID(signed char const&) = 0;
        virtual T* getReceiveDataByUniqueID(enl::UniqueID const&) = 0;

        virtual void clearAllReceivedData() = 0;

        virtual bool checkAllReceive() = 0;

        virtual void postInit_() {};

        virtual void onReceivedCore_(signed char const&,T*,uint) {};
        virtual bool onCheckReceiveCore_(signed char const&,T*,uint) {
            return true;
        }

        virtual T* getSendData() = 0;
        virtual const T* getSendData() const = 0;

        ContentTransporterCommon(uint8_t contentId) {
            this->mPacketNo = 0;
            this->mContentId = contentId;
            this->mIsIdleState = false;
            this->mNeedsUpdate = true;

            this->mReceiveFlags = nullptr;
            this->mReceiveFlagsCount = 0;

            int32_t num = TransportManager::sInstance->getNeededBufferNum();
            this->mMessageBuffers.allocBuffer(num, nullptr, 4);

            for (int i = 0; i < num; i++) {
                enl::DoubleBuffer* doubleBuff = new enl::DoubleBuffer(2, sizeof(T));
                this->mMessageBuffers.pushBack(doubleBuff);
            }

            if (num > 0) {
                this->mReceiveFlagsCount = num;
                this->mReceiveFlags = reinterpret_cast<uint8_t*>(seadNew(num, 4));
            }
            
            for (int i = 0; i < num; i++) {
                this->mReceiveFlags[i] = 0;
            }

            TransportManager::sInstance->regist(this);
        }
    };
}