#pragma once

#include <cstdint>

#include "KartRigidBody.hpp"

namespace object
{
    class KartVehicleTrick : public KartRigidBody
	{
		public:
			uint8_t mPadEC[0xB4];
	};
}