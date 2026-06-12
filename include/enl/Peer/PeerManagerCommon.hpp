#pragma once

#include <cstdint>
#include "PeerManager.hpp"
#include "PeerInfo.hpp"

namespace enl
{
    class PeerManagerCommon : public PeerManager
    {
    public:
        virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*) const override;
        virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const override;
        virtual void prepare() override;
        virtual void calc() override;
        virtual void init() override;
        virtual uint64_t getConnectedAIDBmp() const override;
        virtual uint64_t getDisconnectedAIDBmp() const override;
        virtual uint64_t getConnectedPlayerBmp() const override;
        virtual uint64_t getDisconnectedPlayerBmp() const override;
        virtual int32_t getStationNum() const override;
        virtual int32_t getConnectedStationNum() const override;
        virtual UniqueID getOldUniqueID() const override;
        virtual int8_t getOldAID() const override;
        virtual void unk00() override;
        virtual bool isDisconnected(const int8_t&) const override;
        virtual bool isDisconnectedPlayer(const UniqueID&) const override;
        virtual bool isConnected() const override;
        virtual void updatePlayerIDTable(int32_t) override;
        virtual void updatePlayerIDTable(const sead::Buffer<int8_t>&, int32_t) override;
        virtual void clearPlayerIDTable() override;
        virtual bool isPlayerIDSync() const override;
        virtual bool isAlreadyPlayerIDSync() const override;
        virtual uintptr_t getStationGroupArrayByUniqueID(const UniqueID&) override;
        virtual void clearAIDTable(bool) override;
        virtual bool isAIDValid(const int8_t&) const override;
        virtual bool isBufferIDValid(const int8_t&) const override;
        virtual bool isUniqueIDValid(const UniqueID&) const override;
        virtual int8_t getAIDByUniqueID(const UniqueID&) const override;
        virtual int8_t getAIDByPlayerID(const int8_t&) const override;
        virtual int8_t getAIDByBufferID(const int8_t&) const override;
        virtual int8_t getPlayerIDByAID(const int8_t&) const override;
        virtual int8_t getPlayerIDByUniqueID(const UniqueID&) const override;
        virtual UniqueID getUniqueIDByAID(const int8_t&) const override;
        virtual UniqueID getUniqueIDByBufferID(const int8_t&) const override;
        virtual UniqueID getUniqueIDByPlayerID(const int8_t&) const override;
        virtual UniqueID getUniqueIDByPrincipalID(const uint64_t&) const override;
        virtual uint64_t getPrincipalIDByUniqueID(const UniqueID&) const override;
        virtual int8_t getBufferIDByAID(const int8_t&) const override;
        virtual int8_t getBufferIDByUniqueID(const UniqueID&) const override;
        virtual int8_t getBufferIDByPlayerID(const int8_t&) const override;
        virtual void unk01() override;
        virtual void unk02() override;
        virtual void unk03() override;
        virtual void unk04() override;
        virtual int8_t getHideAID() const override;
        virtual int8_t getHideBufferID() const override;
        virtual int8_t getNextAID(const int8_t&, bool) const override;
        virtual void getUniqueIDInfo(UniqueID*, uint8_t) const override;
        virtual void unk05() override;
        virtual uintptr_t getPlayerIDConvertTable() override;
        virtual int32_t getRegistTaskNum() const override;
        virtual void clearRegistTask(const UniqueID&) override;
        virtual void registPeerInfoAsConnectedForce(const UniqueID&) override;
        virtual void changePeerInfoAsDisconnected(const int8_t&) override;
        virtual void setRequestDecidePlayer() override;
        virtual bool isHideClient() const override;
        virtual bool isHideClientByAID(const int8_t&) const override;
        virtual bool isHideClientByUniqueID(const UniqueID&) const override;
        virtual void setHideRealStationID(const uint64_t&) override;
        virtual uint64_t getHideRealStationID() const override;
        virtual bool checkIsNeedSendAID(const int8_t&) override;
        virtual bool isIDTableSync() const override;
        virtual bool isConnectedPrincipalID(const uint64_t&) const override;
        virtual void registOffline();
        virtual void clearOffline();
        virtual int32_t getPlayerNum() const;
        virtual void onConnect();
        virtual void unk07();
        virtual void unk08();
        virtual void unk09();
        virtual void initPeerConnect_(PeerInfo*);
        virtual void procPeerConnect_(PeerInfo*);
        virtual void initPeerDisconnect_(PeerInfo*);
        virtual void procPeerDisconnect_(PeerInfo*);
        virtual void initPeerLocalSync_(PeerInfo*);
        virtual void procPeerLocalSync_(PeerInfo*);
        virtual void initPeerForceConnect_(PeerInfo*);
        virtual void initPeerForceDisconnect_(PeerInfo*);
        virtual void initPeerWaitMerge_(PeerInfo*);
        virtual void initPeerEndMerge_(PeerInfo*);
        virtual void initPeerWaitMergeHost_(PeerInfo*);
        virtual void syncConnect_();
        virtual void registPeerInfoAsLocal(const UniqueID&, int32_t);
        virtual void registPeerInfoAsDisconnect(const UniqueID&, int32_t);
        virtual void registPeerInfoAsDisconnectSP(const UniqueID&, int32_t);
        virtual void registPeerInfoAsRegisted(const UniqueID&, int32_t);
        virtual void unk10() = 0;
        virtual void unregistPeerInfo(const UniqueID&);
 
        PeerManagerCommon(int32_t);
    };
}