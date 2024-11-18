#ifndef COMPLETE_EMPLOYEE_H
#define COMPLETE_EMPLOYEE_H

#include "Employee.h"

class CompleteEmployee : public Employee {
private:
    float anualBonus;

public:
    CompleteEmployee(float salary, float anualBonus);
    float getCompleteSalary(); 
    float getCalculateTax();
    string getEmployeeInfo(); 
};

#endif 
