#pragma once
#include <cstdint>

#include <audio/Object/AudSoundObjBase.hpp>

namespace audio
{
    class AudSoundObjKart : public AudSoundObjBase
    {
        public:
            enum ETrgKartSE  : int {};

            void requestTrgKartSE(audio::AudSoundObjKart::ETrgKartSE,int,int);
    };
}