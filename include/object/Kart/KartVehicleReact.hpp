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
			
		class EAcdType
		{
		public:
			enum EAcdType_ : int32_t 
			{
				Spin1, // 0x00
				Spin2, // 0x01
				Spin1_, // 0x02
				Spin2_, // 0x03
				Spin2_Oil, // 0x4
				Spin1_Fire, // 0x05
				Spin2__, // 0x06
				Spin1_Electric, // 0x07
				Spin2___, // 0x08
				CrashDir, // 0x09
				CrashDirBig, //0x0A
				CrashLR, // 0x0B
				CrashLRSmall, // 0x0C
				CrashLRBig, // 0x0D
				CrashSmall, // 0x0E
				CrashFwd, // 0x0F
				Hop, // 0x10
				Freeze, // 0x11
				Freeze_Press, // 0x12
				Spin2_NoSound, // 0x13
				None, // 0x14
            };

            EAcdType_ mValue;

            EAcdType(EAcdType_ acdType) : mValue(acdType) {}
            EAcdType(int32_t acdType) : mValue(static_cast<EAcdType_>(acdType)) {}

            ~EAcdType() {}
		};
	};
}
