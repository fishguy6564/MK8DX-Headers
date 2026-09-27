#pragma once

#include <cstdint>
#include <_nn/g3d/ResModel.h>
#include <_nn/g3d/ModelObj.h>

#include <math/seadMatrix.h>
#include <math/seadVector.h>

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
        virtual void setBoneLocalMatrix(sead::Matrix34<float> const&, sead::Vector3<float> const&, int);
        virtual void setBoneLocalRTMatrix(sead::Matrix34<float> const&, int);
        virtual void setBoneLocalScale(sead::Vector3<float> const&, int);
        virtual void getBoneLocalMatrix(sead::Matrix34<float>*, sead::Vector3<float>*, int);
        virtual void setBoneWorldMatrix(sead::Matrix34<float> const&, int);
        virtual void getBoneWorldMatrix(sead::Matrix34<float>*, int);
        // uint8_t mPad00[0xC8]; // 0x00
        // nn::g3d::ModelObj mModelObj; // 0xC8
    };
}