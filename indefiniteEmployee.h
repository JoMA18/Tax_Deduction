#ifndef EMPLOYEE_INDEFINITE_H
#define EMPLOYEE_INDEFINITE_H

#include "employee.h"

class indefiniteEmployee : public employee {
private:
    int workedHour;
    float hourSalary;

public:
    indefiniteEmployee(string name, string id, float hourSalary, int workedHour);
    float calculateTax();
    void employeeInfo();
};

#endif
