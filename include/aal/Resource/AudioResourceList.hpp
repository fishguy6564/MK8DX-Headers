#pragma once

#include <cstdint>

#include <aal/Asset/AssetInfo.hpp>

#include <prim/seadSafeString.h>
#include <container/seadPtrArray.h>

#include "AudioResource.hpp"

namespace aal
{
    // This class is what a barslist represents
    class AudioResourceList
    {
    public:
        virtual bool readAssetInfo(aal::AssetInfo*, sead::SafeStringBase<char> const&);
        virtual ~AudioResourceList();

        uint8_t mPad08[0x08]; // 0x08
        uint8_t const* mRawData; // 0x10
        uint8_t mPad18[0x08]; // 0x18
        sead::PtrArray<AudioResource> mAssets; // 0x20
    };
}