#pragma once

#include <cstdint>

// #include "SaveDataGhostListFile.hpp"
#include "SaveDataFile.hpp"
#include <filedevice/nin/seadNinSaveFileDeviceNin.h>

#include <container/seadSafeArray.h>

namespace gear
{
    // Forward declaration
    class SaveDataGhostListFile;

    // Manager
    class SaveDataManager
    {
    public:
        class SaveGhostParam
        {
        public:
            int32_t mTableIndex; // 0x00
            int32_t mCourseId; // 0x04
            bool mIsDownloaded; // 0x08
            bool mIsFastGhost; // 0x09
            bool mSkipCreate; // 0x0A
            uint8_t mPad0B[5]; // 0x0B

            void getFileName(sead::BufferedSafeStringBase<char> *)const;

            SaveGhostParam() {}
        };

        class LoadGhostParam
        {
        public:
            int32_t mTableIndex; // 0x00
            int32_t mCourseId; // 0x04
            uint8_t mIsDL; // 0x08
            uint8_t mIsFastGhost; // 0x09
            uint8_t mPad0A; // 0x0A

            LoadGhostParam() {}
        };

        class RemoveGhostParam
        {
        public:
            int32_t mCourseId; // 0x00
            uint8_t mIsDL; // 0x04;
            uint8_t mIsFastGhost; // 0x05
            RemoveGhostParam() {}
        };

        template <typename T, int32_t N>
        class ParamBuffer
        {
        public:
            virtual void virtFunc00(); // 0x00

            T* mEntries[N]; // 0x08
            uint32_t mCurrentIndex; // 0x18
            uint32_t mPad1C; // 0x1C

            inline T* peek() {
                return mEntries[mCurrentIndex];
            }
        };

        uint8_t mPad00[0x138];
        SaveDataFile* mGhostSaveDataFile; // 0x138
        uint8_t mPad140[0x20]; // 0x140
        SaveDataGhostListFile* mGhostListFile; // 0x160
        uintptr_t mPad168; // 0x168
        sead::NinSaveFileDevice* mSaveFileDevice; // 0x170;
        uint8_t mPad178[0x350]; // 0x178
        ParamBuffer<RemoveGhostParam, 2>* mRemoveGhostParamBuffer; // 0x4C8
        uint8_t mPad4D0[0x18]; // 0x4D0
        bool mLoadGhostResult; // 0x4E8
        bool mLoadGhostDone; // 0x4E9
        bool mSaveGhostResult; // 0x4EA
        bool mSaveGhostDone; // 0x4EB

        bool loadGhost(gear::SaveDataManager::LoadGhostParam const&);

        void waitSync();
    };

    // SaveData classes
    class SaveDataGhostListFile : public SaveDataFile
    {
    public:
        // using Data = gear::SaveDataGhostListBase::Data;
        void update(gear::SaveDataManager::SaveGhostParam const*);
    };

    SaveDataManager* GetSaveDataManager();
}