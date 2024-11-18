#ifndef PARTIAL_EMPLOYEE_H
#define PARTIAL_EMPLOYEE_H

#include "Employee.h"

class PartialEmployee : public Employee {
private:
    int workedHour;
    float hourSalary;

public:
    PartialEmployee(string name, string id, int workedHour, float hourSalary);

    float getPartialSalary(); 
    float getCalculateTax();
    string getEmployeeInfo(); 
};

#endif 
