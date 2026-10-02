//
// Created by Kolio on 10/2/2026.
//

#include "Time.h"

#include <string>

Time::Time(short hour, short minute,short second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}
void Time::printTime() const {
    std::string timeOfDay;
    int newHour = hour%12;
    if (hour > 12) {
        timeOfDay = "PM";
    }
    else {
        timeOfDay = "AM";
    }
    if (hour == 0) {
        newHour = 12;
    }
    std::printf("%02d:%02d:%02d\n",hour,minute,second);
    std::printf("%02d:%02d:%02d %s",newHour,minute,second,timeOfDay.c_str());

}
