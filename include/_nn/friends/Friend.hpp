#pragma once

#include <cstdint>

#include <_nn/account/Uid.hpp>
#include <_nn/account/NetworkServiceAccountId.hpp>
#include <_nn/friends/FriendPresence.hpp>

namespace nn::friends
{
    struct Friend
    {
        nn::account::Uid mUid; // 0x00
        nn::account::NetworkServiceAccountId mAccountId; // 0x10
        char mNickname[0x28]; // 0x18
        FriendPresence mPresence; // 0x40
        bool mIsFavorite; // 0x120
        bool mIsNewly; // 0x121
        uint8_t mPad122[6]; // 0x122
        bool isValid; // 0x128
        uint8_t mPad129[0xD7]; // 0x129
    };
}