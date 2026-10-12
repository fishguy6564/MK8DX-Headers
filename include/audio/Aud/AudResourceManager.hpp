#pragma once

#include <cstdint>

#include <aal/Resource/AudioResourceList.hpp>
#include <container/seadObjArray.h>

namespace audio
{
    class AudResourceManager
    {
    private:
        inline static AudResourceManager** sInstance = nullptr;

    public:
        struct ResourceListEntry
        {
            aal::AudioResourceList* mResourceList; // 0x00
            uint8_t const* mRawData; //0x08
        };

        uint8_t mPad00[0x88];
        sead::ObjArray<ResourceListEntry> mResourceLists; // 0x88

        // The following function is meant for the user to setup the singleton
        // instance from their plugin at runtime. If you use this class, ensure
        // you do this before calling the getter. This will store the addres
        // that holds the pointer of the AudResourceManager instance. This is
        // to avoid any runtime init timing issues.
        inline static void setSingleton(AudResourceManager** instance) {
            sInstance = instance;
        }

        // This will get the instance of the AudResourceManager.
        // NOTE: Ensure that it has been set prior through the
        // provided setSingleton method
        inline static AudResourceManager* get() {
            return *sInstance;
        }
    };
}