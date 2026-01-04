#pragma once

#include <gear/Math/Matrix.hpp>
#include <math/seadVector.hpp>
#include <math/seadQuat.hpp>

namespace gear
{
    class RigidBody
    {
        public: 
            virtual void test();

            MtxT mTransform; //0x8 - 0x34
            sead::Quat<float> mRotation; // 0x38 - 0x44

            AttT* mRotationMarix; //0x48
            sead::Vector3<float>* mPosition; //0x50
            sead::Vector3<float> mVelocity; //0x58 - 0x60
            sead::Vector3<float> mAngularVelocity; //0x64 - 0x6C not sure about this one
            float mMass1; //0x70;
            float mMass2; //0x74;
            sead::Vector3<float> mInertiaTensor; //0x78 - 0x80
            sead::Vector3<float> mInverseInertiaTensor; //0x84 - 0x8C;
            float unknownArea[0x12]; //0x90 - 0xD4
            float mTimeScale; //0xD8
            float mTimeScaleFraction; //0xDC

            RigidBody();
    };
}