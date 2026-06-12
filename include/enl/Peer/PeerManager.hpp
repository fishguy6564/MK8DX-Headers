#pragma once

#include <cstdint>
#include <prim/seadRuntimeTypeInfo.h>
#include <container/seadBuffer.h>

#include "../Buffer.hpp"
#include "UniqueID.hpp"

namespace enl
{
    class PeerManager
    {
    public:
        virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*) const;
        virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const;
        virtual void prepare() = 0;
        virtual void calc() = 0;
        virtual void init();
        virtual uint64_t getConnectedAIDBmp() const = 0;
        virtual uint64_t getDisconnectedAIDBmp() const = 0;
        virtual uint64_t getConnectedPlayerBmp() const = 0;
        virtual uint64_t getDisconnectedPlayerBmp() const = 0;
        virtual int32_t getConnectedNum() const;
        virtual int32_t getDisconnectedNum() const;
        virtual int32_t getConnectedPlayerNum() const;
        virtual int32_t getDisconnectedPlayerNum() const;
        virtual int32_t getStationNum() const = 0;
        virtual int32_t getConnectedStationNum() const = 0;
        virtual UniqueID getOldUniqueID() const = 0;
        virtual int8_t getOldAID() const = 0;
        virtual void unk00() = 0;
        virtual bool isDisconnected(const int8_t&) const = 0;
        virtual bool isDisconnectedPlayer(const UniqueID&) const = 0;
        virtual bool isConnected() const = 0;
        virtual bool isSessionMaster() const;
        virtual void updatePlayerIDTable(int32_t) = 0;
        virtual void updatePlayerIDTable(const sead::Buffer<int8_t>&, int32_t) = 0;
        virtual void clearPlayerIDTable() = 0;
        virtual bool isPlayerIDSync() const = 0;
        virtual bool isAlreadyPlayerIDSync() const = 0;
        virtual uintptr_t getStationGroupArrayByUniqueID(const UniqueID&) = 0;
        virtual uintptr_t getMyStationGroupArray();
        virtual void clearAIDTable(bool) = 0;
        virtual bool isAIDValid(const int8_t&) const = 0;
        virtual bool isBufferIDValid(const int8_t&) const = 0;
        virtual bool isUniqueIDValid(const UniqueID&) const = 0;
        virtual int8_t getAIDByUniqueID(const UniqueID&) const = 0;
        virtual int8_t getAIDByPlayerID(const int8_t&) const = 0;
        virtual int8_t getAIDByBufferID(const int8_t&) const = 0;
        virtual int8_t getPlayerIDByAID(const int8_t&) const = 0;
        virtual int8_t getPlayerIDByUniqueID(const UniqueID&) const = 0;
        virtual UniqueID getUniqueIDByAID(const int8_t&) const = 0;
        virtual UniqueID getUniqueIDByBufferID(const int8_t&) const = 0;
        virtual UniqueID getUniqueIDByPlayerID(const int8_t&) const = 0;
        virtual UniqueID getUniqueIDByPrincipalID(const uint64_t&) const = 0;
        virtual uint64_t getPrincipalIDByUniqueID(const UniqueID&) const = 0;
        virtual int8_t getBufferIDByAID(const int8_t&) const = 0;
        virtual int8_t getBufferIDByUniqueID(const UniqueID&) const = 0;
        virtual int8_t getBufferIDByPlayerID(const int8_t&) const = 0;
        virtual void unk01() = 0;
        virtual void unk02() = 0;
        virtual void unk03() = 0;
        virtual void unk04() = 0;
        virtual int8_t getHideAID() const = 0;
        virtual int8_t getHideBufferID() const = 0;
        virtual void procOnConnected();
        virtual void procOnPeerChangeState(const UniqueID&, int32_t);
        virtual void procStateChangeEvent();
        virtual int8_t getNextAID(const int8_t&, bool) const = 0;
        virtual void getUniqueIDInfo(UniqueID*, uint8_t) const = 0;
        virtual void unk05() = 0;
        virtual uintptr_t getPlayerIDConvertTable() = 0;
        virtual int32_t getRegistTaskNum() const = 0;
        virtual void clearRegistTask(const UniqueID&) = 0;
        virtual void registPeerInfoAsConnectedForce(const UniqueID&) = 0;
        virtual void changePeerInfoAsDisconnected(const int8_t&) = 0;
        virtual void setRequestDecidePlayer() = 0;
        virtual bool isHideClient() const = 0;
        virtual bool isHideClientByAID(const int8_t&) const = 0;
        virtual bool isHideClientByUniqueID(const UniqueID&) const = 0;
        virtual void setHideRealStationID(const uint64_t&) = 0;
        virtual uint64_t getHideRealStationID() const = 0;
        virtual bool checkIsNeedSendAID(const int8_t&) = 0;
        virtual bool isIDTableSync() const = 0;
        virtual bool isConnectedPrincipalID(const uint64_t&) const = 0;
        virtual bool isOnConnectingState() const;
        virtual void unk06() = 0;
    };
}