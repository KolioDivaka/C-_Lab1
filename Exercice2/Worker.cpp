//
// Created by Kolio on 10/2/2026.
//

#include "Worker.h"

#include <iostream>

Worker::Worker( const char* id) {
    this->id = id;
    this->yearOfService = 0;
}

Worker::Worker(const char *id, const char *name, const char *position) {
    this->id = id;
    this->name = name;
    this->position = position;

}
Worker::~Worker() {
    delete[] salaries;
    delete[] id;
    delete[] name;
    delete[] position;
}

const char *Worker::getId() const  {
    return id;
}
const char *Worker::getName() const {
    return name;
}
const char *Worker::getPosition() const {
    return position;
}

int Worker::getSalariesCount() const {
    return salariesCount;
}

void Worker::setSalaries(const double *newSalaries, int newSalariesCount) {
    delete[] salaries;
    salaries = new double[newSalariesCount];
    salariesCount = newSalariesCount;

    for (int i = 0; i < newSalariesCount; i++) {
        salaries[i] = newSalaries[i];
    }
}

void Worker::setId(const char *newId) {
    delete[] id;
    this->id = newId;

}

void Worker::setName(const char *newName) {
    delete[] name;
    this->name = newName;
}

void Worker::setYearOfService(short newYearOfService) {
    this->yearOfService = newYearOfService;
}

double Worker::getAverageSalary() const {
    if (salariesCount == 0) {
        return 0.0;
    }

    double sum = 0;
    for (int i = 0; i < salariesCount; i++) {
        sum += salaries[i];
    }
    return sum / salariesCount;
}

double Worker::getMinSalary() const {
    if (salariesCount == 0) {
        return 0.0;
    }

    double minSalary = salaries[0];
    for (int i = 0; i < salariesCount; i++) {
        if (salaries[i] < minSalary) {
            minSalary = salaries[i];
        }
    }
    return minSalary;
}

void Worker::printSalaries() const {
    for (int i = 0; i < salariesCount; i++) {
        std::cout <<"" << salaries[i] << ",";
    }
    std::cout << std::endl;
}

short Worker::getYearOfService() const{
    return yearOfService;
}