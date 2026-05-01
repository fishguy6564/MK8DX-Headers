#pragma once

#include <cstdint>
#include <gear/Actor/Actor.hpp>

namespace object
{
    class RaceCheckerBase : public gear::Actor
    {
    public:
        uint32_t mRaceState; // 0x38
    };
}