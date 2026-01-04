#pragma once

#include <audio/Kart/AudSoundObjKart.hpp>

namespace object
{
    class KartInfoProxy
	{
		public:

			bool isStar(void)const;
			bool isTeresa(void)const;

			void startGesso(void)const;
			void startKiller(void)const;
			void startTeresa(void)const;
			void startThunder(int, int)const;

			audio::AudSoundObjKart* getSoundActor()const;
	};
}