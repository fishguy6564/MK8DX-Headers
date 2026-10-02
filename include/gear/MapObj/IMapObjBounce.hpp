#pragma once

#include <cstdint>
#include <gear/Math/Matrix.hpp>

namespace gear
{
    class IMapObjBounce
    {
    public:
        virtual void bounce_updateMtx_(float);
        virtual void bounce_hitGnd_() {};
        virtual float bounce_getGravity_() const { return 0.5f; };
        virtual float bounce_getGndReflect_() const { return 0.25f; };
        virtual float bounce_getInitPeak_() const { return 0.18f; };
        virtual float bounce_getPeakDecay_() const { return 0.4f; };
        virtual float bounce_getInitSpeed_() const { return 0.35f; };
        virtual float bounce_getSpeedAmp_() const { return 1.2f; };
        virtual int bounce_getNumMax_() const { return 1; };

        uint8_t mPad08[0x50]; // 0x08

        IMapObjBounce(gear::MtxT &);
    };
}