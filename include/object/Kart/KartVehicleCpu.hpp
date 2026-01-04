#pragma once

#include <cstdint>

#include "KartVehicleControl.hpp"

namespace object
{
    class KartVehicleCpu : public KartVehicleControl
	{
		public:
			uint8_t mPad70[0x20];
	};
}