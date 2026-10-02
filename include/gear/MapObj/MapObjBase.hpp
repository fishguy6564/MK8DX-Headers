#pragma once

#include <cstdint>
#include <gear/Actor/Actor.hpp>

#include <object/EObjColSe.hpp>
#include <gear/Object/EObjReact.hpp>
#include <gear/Object/ObjectBase.hpp>

#include "MapObjReactProxy.hpp"

#include <gear/Math/Matrix.hpp>
#include <gear/ArgumentObj.hpp>

#include <gsys/Model/Model.hpp>

#include <gear/Item/ItemReact.hpp>
#include <gear/Item/EItemReact.hpp>

#include <gear/Collision/PrimColDefine.hpp>
#include <gear/Collision/GndColDefine.hpp>

#include <gear/Kart/EKartReact.hpp>
#include <gear/Kart/KartReactProxy.hpp>
#include <object/Kart/KartInfoProxy.hpp>

#include <gsys/Model/IModelCallback.hpp>

#include <container/seadRingBuffer.h>

#include <math/seadVector.h>

#include "MapObjDrawManager.hpp"

namespace gear
{
    class MapObjBase : public Actor, public ObjectBase, public gsys::IModelCallback
    {
    public:
        // gear::Actor overrides
        virtual void checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const override; //0x00
        virtual void getRuntimeTypeInfo(void)const override; //0x08
        virtual ~MapObjBase();
        virtual void prepare(gear::ArgumentObj const*) override;
        virtual void enter() override;
        virtual void calc() override;

        virtual void afterModelUpdateWorldMatrix(gsys::Model*) override;
        virtual void prepareObj(gear::ArgumentObj const*) {};
        virtual void enterObj(void) {};
        virtual void resetObj(void) {};
        virtual void calcObj(void) {};
        virtual void createCollision(void);
        virtual void createRecorder(void);
        virtual void reset(void);
        virtual void toIntro(void);
        virtual void startCountdown(void);
        virtual void setupPrimCol(int);
        virtual void calcCollision_Block(gear::MtxT const&);
        virtual void calcCollision_PrimCol(gear::MtxT const&);
        virtual void calcRecorder(void) override;
        virtual void calcSoundObj(gear::MtxT const&) {};
        virtual void afterUpdateMatrix_(gear::MtxT*) {}; // 0xE8
        virtual void hitItem(gear::ItemReact*, int8_t);
        virtual void reactAgainstItem(gear::EObjReact&, gear::EItemReact&, gear::ItemReact*, int8_t);
        virtual void hitKart(gear::KartReactProxy*, int8_t);
        virtual void reactAgainstKart(gear::EObjReact&, gear::EKartReact&, gear::KartReactProxy*, int8_t);
        virtual void reactAgainstKart_GndColBlock(int) {};
        virtual void hitMapObj(gear::MapObjReactProxy*, int8_t) {};
        virtual void react1Impl_Item(gear::ItemReact*) {};
        virtual void react2Impl_Item(gear::ItemReact*) {};
        virtual void reactAgainstPolicePackun(sead::Vector3<float> const&, int);
        virtual void react1Impl_Kart(gear::KartReactProxy*);
        virtual void react2Impl_Kart(gear::KartReactProxy*) {};
        virtual void react1Impl(void) {};
        virtual void react2Impl(void) {};
        virtual void reactKart(gear::EKartReact, gear::KartReactProxy*, gear::PrimColDefine::HitInfo&);
        virtual void reactThunder(void);
        virtual void updateHitInfo(gear::PrimColDefine::HitInfo&, gear::KartReactProxy*, int) {};
        virtual void calcVelGndLocal(gear::GndColDefine::GndInfo*, sead::Vector3<float> const&) {};
        virtual void reactPress(gear::EKartReact, gear::KartReactProxy*, gear::PrimColDefine::HitInfo&);
        virtual void reactCrash(gear::EKartReact, gear::KartReactProxy*, gear::PrimColDefine::HitInfo&);
        virtual bool isIgnoreWallCollision(void) { return false; }; // 0x188
        virtual bool VFunc190() { return true; }; // 0x190
        virtual void calcAfterRecorder_(void) {};
        virtual void getRTMtxForChild(gear::MtxT*, gear::MtxT const&, float) const;
        virtual void getLocalRTMtxForChild(gear::MtxT*, gear::MtxT const&) const;
        virtual const char* getModelName(void) const;
        virtual void calcOuter(void);
        virtual const char* getName(void) const override;
        virtual void updateMatrix(void) override;
        virtual void setXLinkLocalLightMap_(void) override;
        virtual void hitKartSE(object::KartInfoProxy*, gear::EObjReact, gear::EKartReact, object::EObjColSe);
        virtual void createModel(gsys::ModelResource*);
        virtual void registToDrawManager(gear::MapObjDrawManager*);
        virtual void setVisibleImpl(bool, int);
        virtual void calcAfterForChild(void);
        virtual void setIsCalcSkip(bool);
        virtual void addLapPathGroup(short);
        virtual bool hasLapPathGroup(void) const;
        virtual void setVisibleForLapPathGroup(bool,int);
        virtual bool hasRidableFixedBlock(void) { return false; };
        virtual bool isNeedUpdateChild(void) const;
        virtual void getKartBoundParam(void*, int) const {}; // 0x230

        class ClassParam
        {
        public:
            uint8_t mSkeletalAnimNum; // 0x00
            uint8_t mMaterialAnimNum; // 0x01
            uint8_t mPad02[0x02]; // 0x02
            float mPad04; // 0x04
            float mPad08; // 0x08

            // ClassParam() {}
            ClassParam(uint8_t, uint8_t);
            ClassParam(uint8_t, uint8_t, float, float);
        };


        ClassParam* mClassParam;
        uint8_t mPad138[0x78]; // 0x128
        MapObjDrawManager* mDrawManager; // 0x1B0
        int32_t mDrawManagerIndex; // 0x1B8
        int32_t mPad1BC; // 0x1BC
        sead::FixedRingBuffer<int16_t, 8> mRouteGroup; // 0x1C0
        uint8_t mPad1E8[0x10]; // 0x1B8
    };
}