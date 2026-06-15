#pragma once

#include <cstdint>

namespace nn::friends
{
    enum EFriendStatus : uint32_t
    {
        Offline = 0,
        Online = 1,
        Playing = 2,
    };

    struct FriendPresence
    {
        uint8_t mPad00[0x10]; // 0x00
        int64_t mLastOnlineTime; // 0x10
        EFriendStatus mStatus; // 0x18
        uint8_t mIsSameGroupApp; // 0x1C
        uint8_t mPad1D[3]; // 0x1D
        uint8_t mKvStore[0xC0]; // 0x20
    };
}