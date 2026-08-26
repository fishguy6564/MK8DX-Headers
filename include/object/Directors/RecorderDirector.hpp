#pragma once

namespace object
{
    class RecorderDirector
    {
    public:
        virtual void mVirtFunc00(); // 0x00
        virtual void mVirtFunc08(); // 0x08
        virtual void mVirtFunc10(); // 0x10
        virtual void mVirtFunc18(); // 0x18
        virtual void mVirtFunc20(); // 0x20
        virtual void mVirtFunc28(); // 0x28
        virtual void mVirtFunc30(); // 0x30
        virtual void mVirtFunc38(); // 0x38
        virtual void mVirtFunc40(); // 0x40
        virtual void mVirtFunc48(); // 0x48
        virtual void mVirtFunc50(); // 0x50
        virtual void mVirtFunc58(); // 0x58
        virtual void mVirtFunc60(); // 0x60
        virtual void mVirtFunc68(); // 0x68
        virtual void mVirtFunc70(); // 0x70
        virtual void mVirtFunc78(); // 0x78
        virtual void mVirtFunc80(); // 0x80
        virtual void mVirtFunc88(); // 0x88
        virtual void mVirtFunc90(); // 0x90

        virtual bool makeGhostData(); // 0x98
    };
}