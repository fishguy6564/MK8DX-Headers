#pragma once

#include <cstdint>

#include "KartRigidBody.hpp"

#include <gear/Math/Matrix.hpp>
#include <math/seadVectorFwd.h>

namespace object
{
    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class KartVehicleMove : public KartRigidBody
    {
        public:
            uint8_t mPadEC[0x58]; //0xEC
			sead::Vector3f unkVec_138; // 0x138
			sead::Vector3f unkVec_144; // 0x144
			uint8_t pad_150[0xE0]; //0x150
			sead::Vector3f m_gravityVector; //0x230 234 238
			uint8_t pad_23C[0x10]; //0x234
            gear::MtxT unkMatrix_24C; //0x24C
            gear::MtxT unkMatrix_27C; //0x27C
			uint8_t pad_2AC[0x4]; //0x2AC
            sead::Vector3f m_drive_dir; //0x2B0
			sead::Vector3f unkVec_00; //0x2B8 - 0x2C0
			sead::Vector3f unkVec_01; //0x2C4 - 0x2CC
			sead::Vector3f unkVec_2D0; //0x2D0 - 0x2D8
			sead::Vector3f unkVec_2DC; //0x2DC - 0x2E4
			sead::Vector3f unkVec_2E8; // 0x2E8 - 0x2F0
			uint8_t pad_2F4[0x38]; //0x2F4
			float m_velocity; //0x330
			uint8_t pad_330[0x1F4];

            void SetMatrix(gear::MtxT const& transformation, sead::Vector3<float> position);
			void SetMatrix(gear::MtxT const& transformation);

            KartVehicleMove();
    };
}