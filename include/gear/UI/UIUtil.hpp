#pragma once

#include <prim/seadSafeString.h>

namespace gear
{
    class UIUtil
    {
    public:
        static void getFullNumberStr(sead::BufferedSafeStringBase<char16_t> *,int, unsigned int);
    };
}