#pragma once

#include <cstdint>

#include "KartUnitHolder.hpp"

namespace object
{
    // Calc pipeline: CalcPosition -> CalcAI -> CalcMove -> (KartRadar |
    // CalcApply), selected per phase. Each phase submits a job whose buffer
    // is one of the 0xC8 work blocks at 0x170-0x6E8; the phase id lives at
    // 0x790. Member offsets verified against the 4.0.0 binary.
    class KartDirector
	{
		public:
            uint8_t pad_00[0xB0]; // 0x00
            void* mB0; // 0xB0 — passed to the unit getter along with the index
            uint8_t pad_B8[0x8]; // 0xB8
            int mUnitCount; // 0xC0
            uint8_t pad_C4[0x4]; // 0xC4
            KartUnitHolder** mKartUnitHolders; // 0xC8
            uint8_t pad_D0[0x8]; // 0xD0
            void* mD8; // 0xD8 — when set, CalcPosition runs the KartRadar branch instead of CalcApply
            uint8_t pad_E0[0x8]; // 0xE0
            uint8_t mFlagE8; // 0xE8 — run the post-calc hook (arg: m6F8)
            uint8_t mFlagE9; // 0xE9 — run the per-unit pre-reset
            uint8_t pad_EA[0x86]; // 0xEA

            // Job buffers (0xC8 each), reset by CalcAI before accumulation:
            // pointer at +0x00 zeroed, object at +0x28 re-initialized.
            char mWork170[0xC8]; // 0x170 — CalcPosition job block
            char mWork238[0xC8]; // 0x238 — CalcAI job block
            char mWork300[0xC8]; // 0x300 — CalcMove job block
            char mWork3C8[0xC8]; // 0x3C8 — CalcApply job block
            char mWork490[0xC8]; // 0x490 — job block (reset by CalcAI)
            char mWork558[0xC8]; // 0x558 — job block (reset by CalcAI)
            char mWork620[0xC8]; // 0x620 — KartRadar job block
            uint8_t pad_6E8[0x10]; // 0x6E8
            void* m6F8; // 0x6F8 — argument of the post-calc hook
            uint8_t pad_700[0x90]; // 0x700
            int mPhase790; // 0x790 — current calc phase (1..5)

            // AI calc phase: resets the work blocks, accumulates the eligible
            // units and submits the "KartDirector::CalcAI" job.
            void CalcAI(); // KartDirector::CalcAI
            // Full calc pipeline: CalcPosition -> CalcAI -> CalcMove ->
            // (KartRadar|)CalcApply.
            void CalcPosition(); // KartDirector::CalcPosition
	};
}
