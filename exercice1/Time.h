//
// Created by Kolio on 10/2/2026.
//

#ifndef LAB1_TIME_H
#define LAB1_TIME_H


class Time {

    private:
        short hour, minute, second;

    public:
        Time(short hour, short minute, short second);

        void printTime() const;
};



#endif //LAB1_TIME_H
