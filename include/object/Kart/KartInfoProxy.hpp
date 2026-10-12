#pragma once

#include <audio/Kart/AudSoundObjKart.hpp>
#include "KartVehicle.hpp"

namespace object
{
    class KartInfoProxy
	{
		public:
			uint8_t mPad00[0x48]; // 0x00
			KartVehicle* mKartVehicle; // 0x48

			bool isStar(void)const;
			bool isTeresa(void)const;

			void startGesso(void)const;
			void startKiller(void)const;
			void startTeresa(void)const;
			void startThunder(int, int)const;

			audio::AudSoundObjKart* getSoundActor()const;
	};
}