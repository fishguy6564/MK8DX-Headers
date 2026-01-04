#pragma once
#include <cstdint>

namespace audio
{
    class AudSoundObjKart
    {
        public:
            enum ETrgKartSE  : int {};

            void requestTrgKartSE(audio::AudSoundObjKart::ETrgKartSE,int,int);
    };
}