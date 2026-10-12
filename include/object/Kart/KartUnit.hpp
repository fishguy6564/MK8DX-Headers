#pragma once
#include <stdio.h>

#include "KartMatrixInfo.hpp"
#include "KartCamera.hpp"
#include "DriverKart.hpp"

#include <object/Recorder/RecorderKartUnit.hpp>
#include <object/AI/AIUnit.hpp>

namespace object
{
    // Forward declare.
    class KartVehicle;

    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class KartUnit
	{
    public:
		uintptr_t vtable; //0x00
		KartVehicle *mKartVehicle; //0x08
		DriverKart *mDriverKart; // 0x10
		AIUnit *mAIUnit; //0x18
		KartCamera* mKartCamera; //0x20
		uintptr_t mSoundActor; //0x28
		uintptr_t mKartMenuController; //0x30
		RecorderKartUnit* mRecorderKartUnit; //0x38
		int32_t mKartIndex; //0x40
		uint8_t mPad44[0x0C]; // 0x44
		KartMatrixInfo mKartMatrixInfo; // 0x50
	};
}