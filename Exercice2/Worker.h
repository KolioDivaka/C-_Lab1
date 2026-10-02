//
// Created by Kolio on 10/2/2026.
//

#ifndef LAB1_SOCIALWORKER_H
#define LAB1_SOCIALWORKER_H


class Worker {
    private:
    const char * id,*name{},*position{};
    short yearOfService{};

    double *salaries{};
    int salariesCount{};

    public:
    Worker(const char *id);
    Worker(const char *id,const char *name, const char* position);
    ~Worker();

    [[nodiscard]] const char *getId() const;
    [[nodiscard]] const char* getName() const;
    [[nodiscard]] short getYearOfService() const;
    [[nodiscard]] const char *getPosition() const;
    [[nodiscard]] int getSalariesCount() const;

    void setSalaries(const double *newSalaries,int newSalariesCount);
    void setId(const char *newId);
    void setName(const char *newName);
    void setYearOfService(short newYearOfService);

    [[nodiscard]] double getAverageSalary() const;
    [[nodiscard]] double getMinSalary() const;

    void printSalaries() const;
};


#endif //LAB1_SOCIALWORKER_H
