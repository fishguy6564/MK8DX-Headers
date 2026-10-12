#pragma once

#include <cstdint>

#include <aal/Asset/AssetInfo.hpp>
#include <prim/seadSafeString.h>

namespace aal
{
    // .bars representation
    class AudioResource
    {
    public:
        virtual bool readAssetInfo(aal::AssetInfo*, sead::SafeStringBase<char> const&);
        virtual ~AudioResource();

        uint8_t mPad08[0xA0]; // 0x08
    };
}