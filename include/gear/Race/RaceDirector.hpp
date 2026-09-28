#pragma once

#include <cstdint>

#include "LapRankChecker.hpp"

#include <gear/Actor/Actor.hpp>
#include <object/Race/RaceCheckerBase.hpp>

namespace gear
{
    // RaceDirector walks an element array every frame (calc) and tears it
    // down (exit). The element count/array live at 0x38/0x40; the race
    // checkers and the lap rank checker are installed at 0x50/0x58.
    //
    // Signatures below match the 4.0.0 binary. Actor's slots 0x00/0x08 were
    // corrected to return bool / const sead::RuntimeTypeInfo::Interface*
    // accordingly.
    class RaceDirector : public Actor
    {
        public:
            // Slots beyond Actor's vtable; names unknown.
            virtual void slot70();  //0x70
            virtual void slot78();  //0x78
            virtual void slot80();  //0x80
            virtual void slot88();  //0x88
            virtual void slot90();  //0x90 — called from calc()
            virtual void slot98();  //0x98 — calc() tail call
            virtual void slotA0();  //0xa0
            virtual void slotA8();  //0xa8
            virtual void slotB0();  //0xb0 — called from exit()
            virtual void slotB8();  //0xb8 — exit() tail call

            bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const; //0x00
            sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo() const; //0x08
            void calc();   //0x30 — RaceDirector::calc
            void exit();   //0x40 — RaceDirector::exit
            bool isDirector(); //0x48 — RaceDirector::isDirector
            void enterOuter(); //0x68 — RaceDirector::enterOuter

            uint32_t mUnknown38; //0x38 — element count for calc/exit
            void* mUnknown40;    //0x40 — element array walked by calc/exit
            char mPad48[0x8];    //0x48
            object::RaceCheckerBase* mRaceCheckerBase; //0x50
            gear::LapRankChecker* mLapRankChecker;     //0x58
            char mPad60[0x20];   //0x60
            void* mUnknown80;    //0x80 — deleted by the destructor
            void* mUnknown88;    //0x88 — deleted by the destructor
            char mPad90[0x90];   //0x90
    };
}
