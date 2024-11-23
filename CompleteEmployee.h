#ifndef COMPLETE_EMPLOYEE_H
#define COMPLETE_EMPLOYEE_H

#include "employee.h"
#include <string>
#include <iostream>
using namespace std;

// Employee Inheritance
class CompleteEmployee : public Employee {
private:
    float salary;
    float anualBonus; 

public:
    // Constructor
    CompleteEmployee(const std::string name, const std::string id, float salary, float anualBonus);

    // Getters
    float getSalary() const;
    float getAnualBonus() const;

    // Setters
    void setSalary(float salary);
    void setAnualBonus(float anualBonus);

    //Methods
    float getCompleteSalary() const;
    float getCalculateTax() const;
    std::string saveData() const;
};

#endif
