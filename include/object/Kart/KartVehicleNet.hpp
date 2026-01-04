#pragma once

#include <cstdint>

#include "KartVehicleControl.hpp"

namespace object
{
    class KartVehicleNet : public KartVehicleControl
	{
		public:
			uint8_t pad_5C[0x4268];
	};
}