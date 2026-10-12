#pragma once

#include <cstdint>
#include <_nn/g3d/ResModel.h>
#include <_nn/g3d/ModelObj.h>

#include <math/seadMatrix.h>
#include <math/seadVector.h>
#include <math/seadBoundBox.h>

namespace gsys
{
    class ModelUnit
    {
    public:
        virtual void VFunc00(); // 0x00
        virtual void VFunc08(); // 0x08
        virtual void VFunc10(); // 0x10
        virtual void VFunc18(); // 0x18
        virtual void VFunc20(); // 0x20
        virtual void VFunc28(); // 0x28
        virtual void VFunc30(); // 0x30
        virtual void VFunc38(); // 0x38
        virtual void VFunc40(); // 0x40
        virtual void setBoneLocalMatrix(sead::Matrix34<float> const&, sead::Vector3<float> const&, int); // 0x48
        virtual void setBoneLocalRTMatrix(sead::Matrix34<float> const&, int); // 0x50
        virtual void setBoneLocalScale(sead::Vector3<float> const&, int); // 0x58
        virtual void getBoneLocalMatrix(sead::Matrix34<float>*, sead::Vector3<float>*, int); // 0x60
        virtual void setBoneWorldMatrix(sead::Matrix34<float> const&, int); // 0x68
        virtual void getBoneWorldMatrix(sead::Matrix34<float>*, int); // 0x70
        virtual void VFunc78(); // 0x78
        virtual void VFunc80(); // 0x80
        virtual void VFunc88(); // 0x88
        virtual void VFunc90(); // 0x90
        virtual void VFunc98(); // 0x98
        virtual void VFuncA0(); // 0xA0
        virtual void VFuncA8(); // 0xA8
        virtual void VFuncB0(); // 0xB0
        virtual void VFuncB8(); // 0xB8
        virtual void VFuncC0(); // 0xC0
        virtual void VFuncC8(); // 0xC8
        virtual void VFuncD0(); // 0xD0
        virtual void VFuncD8(); // 0xD8
        virtual void VFuncE0(); // 0xE0
        virtual void VFuncE8(); // 0xE8
        virtual void VFuncF0(); // 0xF0
        virtual void VFuncF8(); // 0xF8
        virtual void VFunc100(); // 0x100
        virtual void VFunc108(); // 0x108
        virtual void VFunc110(); // 0x110
        virtual void VFunc118(); // 0x118
        virtual void VFunc120(); // 0x120
        virtual void VFunc128(); // 0x128
        virtual void VFunc130(); // 0x130
        virtual void VFunc138(); // 0x138
        virtual void VFunc140(); // 0x140
        virtual void VFunc148(); // 0x148
        virtual void VFunc150(); // 0x150
        virtual void VFunc158(); // 0x158
        virtual void VFunc160(); // 0x160
        virtual void VFunc168(); // 0x168
        virtual void VFunc170(); // 0x170
        virtual void VFunc178(); // 0x178
        virtual void VFunc180(); // 0x180
        virtual void VFunc188(); // 0x188
        virtual void VFunc190(); // 0x190
        virtual void VFunc198(); // 0x198
        virtual void VFunc1A0(); // 0x1A0
        virtual void VFunc1A8(); // 0x1A8
        virtual void VFunc1B0(); // 0x1B0
        virtual void VFunc1B8(); // 0x1B8
        virtual void VFunc1C0(); // 0x1C0
        virtual void VFunc1C8(); // 0x1C8
        virtual void VFunc1D0(); // 0x1D0
        virtual void VFunc1D8(); // 0x1D8
        virtual void VFunc1E0(); // 0x1E0
        virtual void VFunc1E8(); // 0x1E8
        virtual void VFunc1F0(); // 0x1F0
        virtual void VFunc1F8(); // 0x1F8
        virtual void calcBoundAABB(sead::BoundBox3<float> *,bool); // 0x78
        // uint8_t mPad00[0xC8]; // 0x00
        // nn::g3d::ModelObj mModelObj; // 0xC8
    };
}