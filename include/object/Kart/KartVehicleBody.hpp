#pragma once

#include <cstdint>

#include "KartRigidBody.hpp"

namespace object
{
    class KartVehicleBody : public KartRigidBody
	{
		public:
			uint8_t mPadEC[0x74];
	};
}