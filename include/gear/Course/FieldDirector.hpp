#pragma once

#include <object/Field/FieldManualCulling.hpp>

namespace gear
{
    class FieldDirector
    {
        public: 
            uint8_t mPad00[0x9B0]; // 0x00
            object::FieldManualCulling* mFieldManualCulling; // 0x9B0

            void darken(float);
    };
}