#pragma once

#include <cstdint>
#include <gsys/Model/Model.hpp>

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
        virtual const char* getName(); // 0x18
        virtual const char* getELinkUserName(); // 0x20
        virtual void calcRecorder(); // 0x28
        virtual void updateMatrix(); // 0x30
        virtual void afterApplyAnimation_(); // 0x38
        virtual void afterModelUpdate_(); // 0x40
        virtual void setIsDraw(bool); // 0x48
        virtual void createXLinkProperty_(); // 0x50
        virtual void createXLinkSlot_(); // 0x58
        virtual void createXLinkSlotSkeletal_(); // 0x60
        virtual void createXLinkSlotState_(); // 0x68
        virtual void createXLinkSlotAuto_(); // 0x70
        virtual void setXLinkLocalLightMap_(); // 0x78

        gsys::Model* mModel; // 0x08
        uint8_t mPad10[0x48]; // 0x10
        gear::MtxT mTransform; // 0x58
        gear::AttT* mAttitude; // 0x88
        sead::Vector3f* mPosition; // 0x90
        uint8_t mPad98[0x58]; // 0xC8

        // 0xF0
    };
}