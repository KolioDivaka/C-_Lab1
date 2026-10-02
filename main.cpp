#include <iostream>

#include "exercice1/Time.h"
#include "Exercice2/Worker.h"

using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

static void callExercise1();
static void callExercise2();

int main() {
    // Exercise1
    callExercise1();
    // Exercise2
    callExercise2();


}
static void callExercise1(){
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

static void callExercise2() {
    Worker worker1("12");

    double salaries1[] = {2000.0, 2500.0, 1800.0, 3000.0, 2200.0};
    Worker worker2("13","Kolio","line-cook");
    worker2.setYearOfService(5);
    worker2.setSalaries(salaries1, sizeof(salaries1)/sizeof(double));

    //Worker 1 is initialized with the first constructor
    cout << "Worker 1 ID: "<< worker1.getId()  << endl;
    cout << "Worker 1 years of service: "<<worker1.getYearOfService() << endl;
    cout <<  endl;

    //Worker 2 is initialized with the second and got his remaining values assigned
    cout << "Worker 2 ID: "<< worker2.getId() << endl;
    cout << "Worker 2 name: "<<worker2.getName() << endl;
    cout << "Worker 2 Years of service: "<< worker2.getYearOfService() << endl;
    cout << "Worker 2 Salaries: "<<endl;
    worker2.printSalaries();
    cout <<"Worker 2 MIN Salary: " <<worker2.getMinSalary() << endl;
    cout << "Worker 2 AVRG Salary: "<<worker2.getAverageSalary() << endl;


}