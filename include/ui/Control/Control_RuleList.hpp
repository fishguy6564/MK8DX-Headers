#pragma once

#include "Control_Scroll.hpp"
#include "../Rule/UIRule.hpp"

namespace ui
{
    class Control_RuleList : public Control_Scroll
    {
        public:
            class EType
            {
                public:
                    enum EType_ : int32_t 
                    {
                        TYPE_VS,
                        TYPE_BATTLE,
                        TYPE_02,
                        TYPE_03,
                        TYPE_04,
                        TYPE_05,
                        TYPE_06,
                        TYPE_07,
                        TYPE_08
                    };

                    EType_ mValue;
                    
                    const char* text_(int);

                    EType(EType_ item) : mValue(item) {}
                    EType(int32_t item) : mValue(static_cast<EType_>(item)) {}

                    ~EType() {}
            };

            char mPad318[0x10]; // 0x328

            void updateList(ui::Control_RuleList::EType);

            void pushTitle(u32 msbtID) {
                this->mTitleList[this->mTitleCount] = msbtID;

                Item* scrollItem;

                if(this->mItemStride != 0 && this->mCounterBC > this->mCounter2)
                {
                    scrollItem = &this->mItemList[mItemStride * this->mCounter2];
                }
                else
                {
                    scrollItem = this->mItemList;
                }

                scrollItem->set(0, (unsigned long long)(this->mTitleCount), true, true);

                this->mTitleCount++;
                this->mCounter2++;
            }
            
            void pushRule(ui::UIRule& rule, bool isCheck) {
                // rule.mPad0B = 1;

                if(this->mSize < this->mCapacity)
                {
                    this->mContentList[this->mSize] = reinterpret_cast<uintptr_t*>(&rule);
                    this->mSize++;
                }

                Item* scrollItem;

                if(this->mItemStride != 0 && this->mCounterBC > this->mCounter2)
                {
                    scrollItem = &this->mItemList[this->mCounter2 * this->mItemStride];
                }
                else
                {
                    scrollItem = this->mItemList;
                }

                scrollItem->set(1, (unsigned long long)(this->mOptionCount), false, true);

                this->mCounter1++;
                this->mOptionCount++;
                this->mCounter2++;
            }
    };

    Control_RuleList* GetRuleList();
}