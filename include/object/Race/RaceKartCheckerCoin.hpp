#pragma once

namespace object
{
    class RaceKartCheckerCoin : public gear::RaceKartCheckerBattle
    {
        public:
			uint8_t mPad00[0x100];
			
            void onCrash(int, sead::Vector3<float> const*);
    };
}