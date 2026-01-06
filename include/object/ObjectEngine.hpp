#pragma once

#include <cstdint>

#include <object/Race/RaceDirector.hpp>
#include <object/Kart/KartDirector.hpp>
#include <object/Effect/GameEffectDirector.hpp>

#include <gear/Course/FieldDirector.hpp>
#include <gear/Item/ItemDirector.hpp>
#include <gear/MapObj/MapObjDirector.hpp>

namespace object
{
    class ObjectEngine
    {
        public:
            uint8_t mPad00[0x218];
            object::RaceDirector* mRaceDirector; //0x218
            gear::FieldDirector* mFieldDirector; //0x220
            uintptr_t mPad228; //0x228
            uintptr_t mPad230; //0x230
            object::KartDirector* mKartDirector; //0x238
            gear::ItemDirector* mItemDirector; //0x240
            uintptr_t mPad248; //0x248
            gear::MapObjDirector* mMapObjDirector; //0x250
            char pad_13C[0x8]; //0x13C
            object::GameEffectDirector* m_gameEffectDirector; //0x144


            static ObjectEngine* getEngine();
    };
}