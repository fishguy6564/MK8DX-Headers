#pragma once

#include <cstdint>
#include <prim/seadSafeString.h>

namespace gear
{
    class UIAnimator
    {
    public:
        virtual void nullsub0();
        uint32_t mElementAmount; //0x08
        uint8_t mPad0C[0x10]; //0x0C
        UIAnimator();

        void play(int, float);
        void playContinue(float);
        void playOnOff(int, float);
        void playOnOff(int, int, int, float);

        void stop(int, float);

        void bind(int,sead::SafeStringBase<char> const&);

        bool isPlay(void)const;
        bool isFrameMax(void)const;

        float getFrame(void)const;
        float getFrameMax(int)const;

        int getFrameMaxInt(int)const;
    };
}