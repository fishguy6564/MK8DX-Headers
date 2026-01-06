#pragma once

#include <cstdint>

#include <object/ObjectEngine.hpp>

namespace gear
{
    class FrameworkGameScene
    {
    public:
        uint8_t mPad00[0x1B0]; //0x00
        object::ObjectEngine* mObjectEngine; //0x1B0
    };
}