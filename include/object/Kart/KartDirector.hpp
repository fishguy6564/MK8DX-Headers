#pragma once

#include <cstdint>

#include "KartUnitHolder.hpp"

namespace object
{
    class KartDirector
	{
		public:
			uint8_t pad_00[0xC8];
			KartUnitHolder **mKartUnitHolders;
	};
}