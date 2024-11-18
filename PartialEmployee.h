#ifndef PARTIAL_EMPLOYEE_H
#define PARTIAL_EMPLOYEE_H

#include "Employee.h"

class PartialEmployee : public Employee {
private:
    int workedHour;
    float hourSalary;

public:
    PartialEmployee(const string name, const string id, int workedHour, float hourSalary);

    float getSalary(); 
    float getCalculateTax();
    string getEmployeeInfo(); 
};

#endif 