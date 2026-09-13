#pragma once

#include <cstdint>

namespace gear
{
    class NetworkUtil
    {
        public:
            static int getMyKartIndex();
            static bool isWatcher(); 
            static bool isMySendKart(int);
            static uint64_t getMyPrincipalID();
    };
}