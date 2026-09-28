#pragma once

#include <cstdint>

namespace nn::pia::session
{
    // Polymorphic base of the session components. Only the slots referenced
    // by this unit have known semantics; the others keep the slot offsets.
    class SessionObject
    {
        public:
            virtual ~SessionObject(); // 0x00/0x08
            virtual void slot10();    // 0x10
            virtual void slot18();    // 0x18
            virtual void slot20();    // 0x20
            virtual void slot28();    // 0x28 — notification invoked from job steps
    };

    // Session state object (pointed to by SessionCtx::mState) — partial layout.
    class SessionState
    {
        public:
            uint8_t mPad00[8]; // 0x00
            SessionObject* mInnerObject; // 0x08 — inner object that receives slot28
            uint8_t mPad10[0x60]; // 0x10
            void* mField70; // 0x70
            uint8_t mPad78[0x5c]; // 0x78
            unsigned int mD4; // 0xd4 — must be 4 for the LeaveSessionJob transition
    };

    // Session context singleton at .data:0x71013123e0 — partial layout.
    // mState is re-read in the branches (the original reloads [ctx] after calls).
    class SessionCtx
    {
        public:
            SessionState* mState; // 0x00 — passed to the state getter
    };

    // nn::pia::session::DestroySessionJob — state machine steps.
    // Slots 0x10–0x38 of its own vtable are unknown; slot40 is invoked from
    // the steps (state transition).
    class DestroySessionJob : public SessionObject
    {
        public:
            virtual void slot30(); // 0x30
            virtual void slot38(); // 0x38
            virtual void slot40(); // 0x40 — invoked from the steps

            // 64-bit return (the original writes 5 via mov w0,#5 — writing W
            // zeroes the upper half)
            uint64_t SendMonitoringData(); // nn::pia::session::DestroySessionJob::SendMonitoringData
            uint64_t CompleteProcess();
            uint64_t SendMonitoringData2(); // SendMonitoringData overload #2
            uint64_t SendMonitoringData3(); // SendMonitoringData overload #3

            struct Result
            {
                void* a;
                void* b;
            };

            uint8_t mPad08[0x28]; // 0x08
            Result mResult30; // 0x30 — {ptr, null} step result
            const char* mStepName; // 0x40 — MethodTree string
            uint8_t mPad48[0x18]; // 0x48
            unsigned int mField60; // 0x60
            unsigned int mField64; // 0x64
            unsigned int mField68; // 0x68
            uint8_t mPad6c[0x14]; // 0x6c
            unsigned long mStepStartTick; // 0x80 — start tick of the current step
            unsigned int mField84; // 0x84
            bool mFlag88; // 0x88
    };
}
