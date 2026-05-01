#pragma once

#include <mush/Course/EGrandPrixID.hpp>

namespace gear
{
    class FlagAccessor
    {
    public:
        bool isOpen(mush::EGrandPrixID) const;
    };
}