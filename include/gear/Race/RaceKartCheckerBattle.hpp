#pragma once

namespace gear
{
    class RaceKartCheckerBattle
	{
		public:
			uint8_t mPad00[0x100];
			
			void onCrash(int, const sead::Vector3<float>*);
	};
	
	RaceKartCheckerBattle* GetRaceKartCheckerBattle(int);
}