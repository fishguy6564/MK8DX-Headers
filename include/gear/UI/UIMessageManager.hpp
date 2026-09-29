#pragma once
#include <cstdint>

#include <heap/seadHeap.h>
#include <prim/seadSafeString.h>

namespace gear
{
    class UIMessageManager
    {
        public:
            const char16_t* getMessage(int);

            void load(sead::SafeStringBase<char> const&, sead::Heap*);
    };

    UIMessageManager* GetUIMessageManager();
}