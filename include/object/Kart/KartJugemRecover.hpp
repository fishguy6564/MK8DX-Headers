#pragma once

#include <cstdint>
#include <object/Race/LapRankChecker.hpp>

namespace object
{
    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class KartJugemRecover
	{
		public:
			uint8_t mPad00[0x28]; //0x00 - 0x28
			LapRankChecker* mLapRankChecker;
			uint8_t mPad2C[0x170];
	};
}