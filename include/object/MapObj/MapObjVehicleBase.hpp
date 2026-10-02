#pragma once

#include <cstdint>
#include <gear/MapObj/MapObjBase.hpp>
#include <gear/MapObj/MapObjCreateArg.hpp>

#include <gear/MapObj/IMapObjBounce.hpp>

namespace object
{
    class MapObjVehicleBase : public gear::MapObjBase, public gear::IMapObjBounce
    {
    public:
        virtual ~MapObjVehicleBase();
        virtual void prepareObj(gear::ArgumentObj const*) override;
        virtual void enterObj() override;
        virtual void resetObj(void) override;
        virtual void calcObj(void) override;
        virtual void createCollision(void) override;
        virtual void setupPrimCol(int) override;
        virtual void calcSoundObj(gear::MtxT const&) override;
        virtual void react1Impl_Item(gear::ItemReact*) override;
        virtual void react1Impl_Kart(gear::KartReactProxy*) override;
        virtual void reactKart(gear::EKartReact, gear::KartReactProxy*, gear::PrimColDefine::HitInfo&) override;
        virtual void updateHitInfo(gear::PrimColDefine::HitInfo&, gear::KartReactProxy*, int) override;
        virtual bool isIgnoreWallCollision(void) override { return true; };
        virtual void getRTMtxForChild(gear::MtxT*, gear::MtxT const&, float) const override;
        virtual void bindModel();
        virtual void calcOffset();
        virtual void calcPath();
        virtual void setDecalAoParam() {};
        virtual float* getColOffset() const;
        virtual float* getSoundOffset() const;
        virtual float bounce_getGravity_() const override { return 0.2f; };
        virtual float bounce_getGndReflect_() const override { return 0.2f; }
        virtual float bounce_getInitPeak_() const override { return 0.18f; };
        virtual float bounce_getPeakDecay_() const override { return 0.4f; };
        virtual float bounce_getInitSpeed_() const override { return 0.35f; };
        virtual float bounce_getSpeedAmp_() const override { return 1.2f; };
        virtual int bounce_getNumMax_() const override { return 1; };
        virtual void bounce_hitGnd_() override;
        virtual void createXLinkSlotState_() override;

        uint8_t mPad250[0x98]; // 0x250

        MapObjVehicleBase(gear::MapObjCreateArg const&);
    };
}