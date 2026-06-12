#pragma once

#include <cstdint>

#include "SendManager.hpp"
#include "TransportManager.hpp"
#include "Peer/PeerManagerCommon.hpp"

namespace enl
{
    class Framework
    {
    public:
        static inline Framework* sInstance;

        uint8_t mPad00[0x28];
        PeerManagerCommon* mPeerManager; // 0x28
        uintptr_t mPad30; // 0x30
        TransportManager* mTransportManager; // 0x38
        SendManager* mSendManager; // 0x40
    };
}