#pragma once

#include <cstdint>

#include "KartVehicleControl.hpp"
#include "KartVehicleNetData.hpp"

#include <naked/Network/NetworkDataDrive.hpp>

#include <container/seadSafeArray.h>

namespace object
{
    class KartVehicleNet : public KartVehicleControl
	{
		public:
			sead::SafeArray<KartVehicleNetData, 50> mReceiveBuff; // 0x70
			int32_t mRecvCurrentIdx; // 0x13F8
			int32_t mReceiveCount; // 0x13FC
			KartVehicleNetData mReceiveData; // 0x1400
			uint8_t mPad1464[0x2E70]; // 0x1464
			uint8_t mPad42D4; // 0x42D4
			uint8_t mPad42D5; // 0x42D5
			uint8_t mPad42D6; // 0x42D6
			uint8_t mPad42D7; // 0x42D7

			void warp_();

		// 0x42D8
	};
	static_assert(sizeof(KartVehicleNet) == 0x42D8, "Bad size for KartVehicleNet!");
}