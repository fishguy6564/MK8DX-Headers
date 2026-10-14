#pragma once

#include <cstdint>

namespace gear
{
    class MapUnitDefine
    {
    public:
        struct PointId
        {
            uint16_t mPath;
            uint16_t mPoint;
        };
    };
}