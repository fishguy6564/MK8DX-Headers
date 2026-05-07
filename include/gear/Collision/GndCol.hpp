#pragma once

#include <heap/seadDisposer.h>

namespace gear
{
    class GndCol : public sead::IDisposer
    {
        public:
            GndCol(int);
    };
}