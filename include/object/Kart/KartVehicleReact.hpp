#pragma once

#include <cstdint>

namespace object
{
    class KartVehicleReact
	{
		public:
			uint8_t mPad00[0x10]; // 0x00
			KartVehicle *mKartVehicle; // 0x10
			uint8_t mPad18[0x78];      // 0x90
			
			void requestBattleDropCoin(int, sead::Vector3<float> const&);
	};
}
