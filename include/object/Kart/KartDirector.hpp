#pragma once

#include <cstdint>

#include "KartUnitHolder.hpp"

namespace object
{
    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class KartDirector
	{
		public:
			uint8_t pad_00[0x68];
			KartUnitHolder **m_kart_unit_holders;
	};
}