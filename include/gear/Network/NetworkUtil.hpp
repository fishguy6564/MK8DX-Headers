#pragma once

namespace gear
{
    class NetworkUtil
    {
        public:
            static int getMyKartIndex();
            static bool isWatcher(); 
            static bool isMySendKart(int);
    };
}