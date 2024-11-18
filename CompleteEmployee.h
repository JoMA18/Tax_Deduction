#ifndef COMPLETE_EMPLOYEE_H
#define COMPLETE_EMPLOYEE_H

#include "Employee.h"

class CompleteEmployee : public Employee {
private:
    float anualBonus;

public:
    CompleteEmployee(string name, string id, float anualBonus);
    float getSalary(); 
    float getCalculateTax();
    string getEmployeeInfo(); 
};

#endif 
