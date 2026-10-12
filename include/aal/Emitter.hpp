#pragma once

#include <cstdint>

#include <thread/seadCriticalSection.h>


#include <aal/Asset/AssetInfo.hpp>
#include <aal/Param/SoundParam.hpp>
#include <aal/Result/StartResult.hpp>
#include <aal/Spatial/SpatialSetting.hpp>
#include <aal/Spatial/SoundSource.hpp>

#include <aal/Handle.hpp>

namespace aal
{
    class Emitter
    {
    public:
        virtual ~Emitter();

        SoundParam mParam; // 0x08
        uint8_t mPad50[0x08]; // 0x50
        sead::CriticalSection mCriticalSection; // 0x58
        uint8_t mPad98[0x10]; // 0x98
        SpatialSetting mSpatialSettings; // 0xA8

        Handle emit(aal::AssetInfo const&, aal::SoundSource::SetupInfo*, aal::StartResult*);
    };
}