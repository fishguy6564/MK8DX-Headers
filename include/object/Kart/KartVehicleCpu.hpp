#pragma once

#include <cstdint>

#include "KartVehicleControl.hpp"
#include <math/seadVector.h>

namespace object
{
    class KartVehicleCpu : public KartVehicleControl
	{
		public:
			uint8_t mPad70[0x14]; // 0x70
			sead::Vector3f mDriveUnitVector; // 0x84
			// 0x90
	};
}