#pragma once

#include <cstdint>
#include <gsys/Model/Model.hpp>

namespace object
{
    class DriverKart
    {
    public:
        uint8_t mPad[0x30];
        gsys::Model* mModel;

        void resetWarpPost();
    };
}