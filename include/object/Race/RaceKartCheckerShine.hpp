#pragma once

namespace object
{
    class RaceKartCheckerShine : public gear::RaceKartCheckerBattle
    {
        public:
			uint8_t mPad00[0x170];
			
            void onCrash(int, sead::Vector3<float> const*);
    };
}