#pragma once

#include <cstdint>
#include <prim/seadSafeString.hpp>

namespace gear
{
    class ByamlIter
    {
        public:
            uintptr_t mPad00;
            uintptr_t mPad08;

            ByamlIter();
            ByamlIter(unsigned char const*);
            ByamlIter(gear::ByamlIter const&);

            bool tryGetIterByKey(gear::ByamlIter*, char const*)const;
            bool tryGetIterAndKeyNameByIndex(gear::ByamlIter*, char const**, int)const;
            bool tryGetBinaryByKey(unsigned char const**, int *, char const*)const;

            bool tryGetStringByKey(char const**, char const*)const;
            bool tryGetIntByKey(int *, char const*)const;
            bool tryGetFloatByKey(float *, char const*)const;

            bool tryGetIterByIndex(gear::ByamlIter*, int) const;

            u32 getSize()const;
    };

    uint8_t* GetByamlRawData();
}