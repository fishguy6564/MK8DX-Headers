#pragma once

#include <cstdint>

namespace nn::pia::session
{
    // nn::pia::session::JoinMeshJob — state machine steps.
    // Layout mirrors DestroySessionJob (same job framework): 16-byte step
    // result at +0x30, step name (MethodTree string) at +0x40.
    class JoinMeshJob
    {
        public:
            struct Result
            {
                void* a;
                void* b;
            };

            uint8_t mPad00[0x30]; // 0x00 — vptr + unknown base fields (layout matches the job framework)
            Result mResult30; // 0x30 — {ptr, null} step result
            const char* mStepName; // 0x40 — MethodTree string
            uint8_t mPad48[0x20]; // 0x48
            unsigned int mField68; // 0x68 — per-call argument passed to the session mgr
            uint8_t mPad6c[0x14]; // 0x6c
            unsigned int mFlag80; // 0x80 — written as 32-bit zero, read as a byte

            // 64-bit return (state ids: 0 ok, 1 step again, 5 done)
            uint64_t WaitJoinResponse();
    };
}
