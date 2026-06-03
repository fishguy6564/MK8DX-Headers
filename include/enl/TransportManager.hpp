#pragma once

#include <cstdint>
#include <prim/seadRuntimeTypeInfo.h>

#include "ContentTransporter/IContentTransporter.hpp"

namespace enl
{
    class TransportManager
    {
    public:
        static inline TransportManager* sInstance = nullptr;

        virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const; //!
        virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const; // !
        virtual void init(); //!
        virtual void calcSend(); //!
        virtual void calcReceive(); //!
        virtual void receive(); //!
        virtual void receiveFromLib() = 0;
        virtual void receiveSet(signed char, uint8_t*, uint32_t); //!
        virtual void clearReceiveFlg(); //!
        virtual void readySend(); //!
        virtual void regist(enl::IContentTransporter* transp); //!
        virtual void readyTransportBuffer(); //!
        virtual void* getSendBufferArray(); //!
        virtual int32_t getPlayerNum(); //!
        virtual int32_t getNeededBufferNum() const; //!
        virtual void updateSystemTransport(); //!
        virtual int32_t getReceivedAIDBmp() const; //!
        virtual void clearReceivedAIDBmp(); //!
        virtual void updateTransportInfo() = 0;

        bool isRequest(uint8_t const&);
    };
}