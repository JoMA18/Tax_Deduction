#ifndef EMPLOYEE_HIRED_H
#define EMPLOYEE_HIRED_H

#include "employee.h"

class hiredEmployee : public employee {
private:
    float anualBonus;

public:
    hiredEmployee(string name, string id, float baseSalary, float anualBonus);
    float calculateTax();
    void employeeInfo();
};

#endif
