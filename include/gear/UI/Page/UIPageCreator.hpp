#pragma once

#include <cstdint>



#include <eui/Screen/ScreenFactory.hpp>

#include <gear/UI/Page/UIPage.hpp>

namespace gear
{
    class UIPageCreator : public eui::ScreenFactory
    {
    public:
        virtual ~UIPageCreator() override;
        virtual eui::Screen* createScreen(sead::Heap*, int32_t) override;
        virtual const char* getScreenName(int32_t) const override;
        virtual uint32_t getScreenNum() const override;
        virtual bool checkDerivedRuntimeTypeInfo(const sead::RuntimeTypeInfo::Interface*) const override;
        virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const override;

        using FactoryFn = UIPage* (*)();
        FactoryFn mPages[0x87]; // 0x08
        const char* mScreeNames[0x87]; // 0x440
        uintptr_t mPad870; // 0x870
    };

    UIPageCreator* GetUIPageCreator(void);
}