#pragma once

#include <cstdint>

#include "DestroySessionJob.hpp" // SessionObject

namespace nn::pia::session
{
    // nn::pia::session::LeaveSessionJob — state machine steps (same job
    // framework as DestroySessionJob).
    class LeaveSessionJob : public SessionObject
    {
        public:
            virtual void slot30(); // 0x30 — state transition, invoked from SendMonitoringData

            struct Result
            {
                void* a;
                void* b;
            };

            uint8_t mPad08[0x28]; // 0x08
            Result mResult30; // 0x30 — {ptr, null} step result
            const char* mStepName; // 0x40 — MethodTree string
            uint8_t mPad48[0x48]; // 0x48
            unsigned long mStepStartTick; // 0x90 — start tick of the current step

            // 64-bit return
            uint64_t SendMonitoringData();
            uint64_t CompleteProcess();
    };
}
