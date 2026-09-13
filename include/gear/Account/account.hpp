#pragma once

#include <cstdint>

#include <_nn/account/Uid.hpp>
#include <_nn/mii/mii.hpp>

namespace gear
{
    class AccountSetting
    {
    public:
        class Setting
        {
        public:
            uint32_t mRegion; // 0x00
            uint32_t mLanguage; // 0x04
            uint8_t mPad08[0x80]; // 0x08
        };

        class Account
        {
        public:
            nn::account::Uid mUid; // 0x00
            uint8_t mPad10[0x08]; // 0x10
            nn::mii::CharInfoElement mMii; // 0x18
            uint8_t mPad74[0x08]; // 0x74
            uint32_t mFlags; // 0x7C

        };

        Setting mSetting; // 0x00
        Account mAccounts[8]; // 0x88
        Account* mCurrentAccount; // 0x488
    };

    gear::AccountSetting* GetAccountSetting();
}