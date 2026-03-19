#pragma once

#include <prim/seadSafeString.h>
#include <heap/seadHeap.h>

#include "ResourceBase.hpp"

namespace gear
{
    class ResourceLoader
    {
    public:
        struct LoadArg {
            sead::Heap* mHeap = nullptr;             // 0x00
            uint32_t mAlignment = 0x1000;            // 0x08
            uint32_t mPad0C = 0;                     // 0x0C
            const char* mExt = nullptr;              // 0x10
            gear::EResourceCategory mCategory = 0;   // 0x18
            bool mSkipCacheCheck = false;            // 0x1C
            bool mFlag1D = false;                    // 0x1D
            bool mFlag1E = false;                    // 0x1E
            uint8_t mPad1F = 0;                      // 0x1F
            uintptr_t mFactory = 0;                  // 0x20
            uint32_t mPad28 = 0;                     // 0x28
            uint32_t mPad2C = 0;                     // 0x2C
        };

        template<typename T>
        T* loadAsCommon_(const sead::SafeStringBase<char>& path, const LoadArg& arg);
    };

    ResourceLoader* GetResourceLoader();
}