#pragma once

#include <cstdint>

#include <xlink2/Locator.hpp>

namespace gear
{
    class AudSoundLinkUserBase
    {
    public:
        bool searchSound(xlink2::Locator*, char const*);
        void play(xlink2::Locator*);
    };
}