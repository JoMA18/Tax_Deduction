#ifndef PARTIAL_EMPLOYEE_H
#define PARTIAL_EMPLOYEE_H

#include "employee.h"
#include <string>
using namespace std;

// Employee Inheritance
class PartialEmployee : public Employee {
private:
    float workedHour; 

public:
    // Constructor
    PartialEmployee(const std::string name, const std::string id, float workedHour);

    // Getters
    int getWorkedHour() const;

    // Setters
    void setWorkedHour(float workedHour);

    // Methods
    float getPartialSalary() const;
    float getCalculateTax() const;
    std::string saveData() const;

};

#endif
