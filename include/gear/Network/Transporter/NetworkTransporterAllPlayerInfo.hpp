#pragma once

#include <enl/ContentTransporter/ContentTransporterCommon.hpp>
#include "../NetworkDataAllPlayerInfo.hpp"

namespace gear
{
    class NetworkTransporterAllPlayerInfo : public enl::ContentTransporterCommon<gear::NetworkDataAllPlayerInfo>
    {
    public:
        gear::NetworkDataAllPlayerInfo mSendData; // 0x58
        uint16_t mPad1C8; // 0x1C8
        uint8_t mPad1CA; // 0x1CA
        uint8_t mPad1CB[0x5]; // 0x1CB;
    };
}