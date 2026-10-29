#pragma once
#include <array>
#include <iostream>
#include "holiday.h"

namespace KimYeonjin2693058
{
    const int max{10};
    class holidayGroup
    {
        std::string groupName;
        std::array<KimYeonjin2693058::holiday, max> holidayList;
        int n;
    public:
        holidayGroup(const std::string& newGroupName) : groupName{newGroupName}, n{0} {}
        void addHoliday(const holiday& h)
        {
            if(n >= max){
            std::cout << "exiting...\n";
            std::exit(1);}
            holidayList[n] = h; n += 1;
        }

        void print() const
        {
            std::cout << "group name is: " << groupName << std::endl;
            for(int i = 0; i < n; i++)
            std::cout << "Holiday list: " << holidayList[i] << std::endl;
        }
        const std::string& getGroupName() const
        {
            return groupName;
        }
        void setGroupname (const std::string& n) {groupName = n;}
    };
}
