#pragma once

#include <cstdint>
#include <gear/MapObj/MapObjBase.hpp>

namespace object
{
    // Ultimately inherits gear::MapObjBase
    class MapObjItemBox : public gear::MapObjBase
    {
    public:
        uint8_t mPad1F8[0x78]; // 0x1F8
        gear::MapObjBase* mFontObj; // 0x270
        uint8_t mPad278[0xD0]; // 0x278
        bool mIsDoubleBox; // 0x348
    };
}