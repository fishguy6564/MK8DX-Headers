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
            uint8_t mPadEC[0x90]; //0xEC
			sead::Vector3f mPad17C; // 0x17C - 0x184
			sead::Vector3f mPad188; // 0x188 - 0x190
			uint8_t mPad194[0xE8]; //0x194
			sead::Vector3f mGravityVector; //0x27C - 0x284
			uint8_t mPad288[0x14]; //0x288
            gear::MtxT mPad29C; //0x29C
            gear::MtxT mPad2CC; //0x2CC
            sead::Vector3f mDriveDir; //0x2FC - 0x304
			sead::Vector3f mPad308; //0x308 - 0x310
			sead::Vector3f mPad314; //0x314 - 0x31C
			sead::Vector3f mPad320; //0x320 - 0x328
			sead::Vector3f mPad32C; //0x32C - 0x334
			sead::Vector3f mPad338; //0x338 - 0x340
			uint8_t mPad344[0xDC]; //0x344
			float mSpeed; //0x420
			uint8_t mPad424[0x1D4];

            void SetMatrix(gear::MtxT const& transformation, sead::Vector3<float> position);
			void SetMatrix(gear::MtxT const& transformation);

            KartVehicleMove();
    };
}