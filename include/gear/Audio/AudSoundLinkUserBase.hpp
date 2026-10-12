#pragma once

#include <cstdint>

#include <xlink2/Locator.hpp>
#include <xlink2/UserInstanceSLink.hpp>

namespace gear
{
    class AudSoundLinkUserBase
    {
    public:
        uint8_t mPad00[0x20]; // 0x00
        xlink2::UserInstanceSLink* mXLinkUserInstance; // 0x20

        bool searchSound(xlink2::Locator*, char const*);
        void play(xlink2::Locator*);
    };
}