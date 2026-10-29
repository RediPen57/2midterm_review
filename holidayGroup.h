#pragma once
#include <array>
#include <iostream>
#include "holiday.h"

namespace KimYeonjin2693058
{
    class holidayGroup
    {
        const int max{10};
        std::string groupName;
        std::array<std::holiday, max> holidayList;
        int n;
    public:
        holidayGroup(std::string newGroupName) : groupname{newGroupName}, n{0} {}
        void addHoliday(const holiday& h)
        {
            if(n >= max)
            return exit(1);
            holdiayList[n] = h;
        }

        void print() const
        {
            std::cout << "group name is: " << groupName << std::endl;
            for(n{1}; n < max; i++)
            std::cout << "Holiday list: " << holidayList[i] << std::endl;
        }
        std::string& getGroupName() const
        {
            return groupName;
        }
        void setGroupname (const std::string& n) {groupName = n;}



    }
    
    
}
