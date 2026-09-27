#pragma once

#include <math/seadVector.hpp>
#include <math/seadQuat.hpp>

namespace gear
{
    class AttT
    {
        public:
            float M11; //0x00
            float M12; //0x04
            float M13; //0x08
            float M21; //0x0C
            float M22; //0x10
            float M23; //0x14
            float M31; //0x18
            float M32; //0x1C
            float M33; //0x20

            void out(sead::Quat<float> *)const;

            inline void idenity() {
                M11 = 1.0f; M12 = 0.0f; M13 = 0.0f;
                M21 = 0.0f; M22 = 1.0f; M23 = 0.0f;
                M31 = 0.0f; M32 = 0.0f; M33 = 1.0f;
            }
    };

    class MtxT
    {
        public:
            AttT mRotation;
            sead::Vector3<float> mTranslation;

            void identity();
    };
}