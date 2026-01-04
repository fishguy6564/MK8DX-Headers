#pragma once

#include <cstdint>

#include "KartUnit.hpp"

namespace object
{
    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class KartUnitHolder : public KartUnit
	{
		public:
			uint8_t pad_00[0xD8];
	};
}