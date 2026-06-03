#pragma once

#include <cstdint>

/*
* Using the following resource as context or as complete implementation:
* https://github.com/EpicUsername12/mk8-cafeloader-ctcode/blob/2dd1c7d0ef0c547d7df51aaf5e32b3d9a1f764f1/include/mk8/enl/Peer.h
*/

namespace enl {

    class UniqueID
    {
    public:
        int32_t mStationId; // 0x00
        uint8_t mPlayerId; // 0x04
        uint8_t mPad05; // 0x05

    public:
        inline bool isStationValid() {
            return this->mStationId != 253;
        }

        inline bool isFullyEqual(const UniqueID& rhs) const {
            return (this->mStationId == rhs.mStationId) && (this->mPlayerId == rhs.mPlayerId) && (this->mPad05 == rhs.mPad05);
        }

        friend bool operator==(const UniqueID& lhs, const UniqueID& rhs) {
            return (lhs.mStationId == rhs.mStationId) && (lhs.mPlayerId == rhs.mPlayerId);
        }

        UniqueID() {
            mStationId = 253;
            mPlayerId = 0;
            mPad05 = 0;
        }
    };
}