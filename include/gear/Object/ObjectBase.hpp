#pragma once

#include <cstdint>
#include <gsys/Model/Model.hpp>
#include <gsys/Model/ModelAnimation.hpp>

#include <gsys/Animation/SkeletalAnmType.hpp>
#include <gsys/Animation/AnimationAccessKey.hpp>

#include <gear/Audio/AudSoundLinkUserBase.hpp>

#include <audio/Object/AudSoundObjSLink.hpp>

#include <gear/Math/Matrix.hpp>
#include <math/seadVector.h>

namespace gear
{
    class ObjectBase
    {
    public:
        virtual ~ObjectBase(); // 0x00
        virtual void createXLink(char const*,char const*); // 0x08
        virtual void bindModel(); // 0x10
        virtual const char* getName() const; // 0x18
        virtual const char* getELinkUserName() const; // 0x20
        virtual void calcRecorder(); // 0x28
        virtual void updateMatrix(); // 0x30
        virtual void afterApplyAnimation_() {}; // 0x38
        virtual void afterModelUpdate_() {}; // 0x40
        virtual void setIsDraw(bool); // 0x48
        virtual void createXLinkProperty_() {}; // 0x50
        virtual void createXLinkSlot_(); // 0x58
        virtual void createXLinkSlotSkeletal_(); // 0x60
        virtual void createXLinkSlotState_() {}; // 0x68
        virtual void createXLinkSlotAuto_(); // 0x70
        virtual void setXLinkLocalLightMap_(); // 0x78

        gsys::Model* mModel; // 0x08
        gsys::ModelAnimation* mModelAnimation; // 0x10
        uint8_t mPad18[0x40]; // 0x10
        gear::MtxT mTransform; // 0x58
        gear::AttT* mAttitude; // 0x88
        sead::Vector3f* mPosition; // 0x90
        uint8_t mPad98[0x0C]; // 0xC8
        uint16_t mObjFlags; // 0xA4
        uint16_t mPadA6; // 0xA6
        uint8_t mPadA8[0x08]; // 0xA8
        gear::AudSoundLinkUserBase* mSoundLinkUser; // 0xB0
        uint8_t mPadB8[0x38]; // 0xB8

        void changeSkeletalAnm(uint8_t, gsys::AnimationAccessKey<gsys::SkeletalAnmType> const&, float, float);
        audio::AudSoundObjSLink* getSoundObj();

        // 0xF0
    };
}