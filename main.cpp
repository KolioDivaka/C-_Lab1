#include <iostream>

#include "Time.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {

    short hour,minute,second;

    while (true) {
        std::cout <<"Enter Hours: ";
        std::cin >> hour;
        std::cout <<"Enter Minutes: ";
        std::cin >> minute;
        std::cout <<"Enter Seconds: ";
        std::cin >> second;

        if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59) {
            std::cout <<"\nInvalid input\n";
            continue;
        }
        Time time(hour,minute,second);
        time.printTime();
        break;

    }
}