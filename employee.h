#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class employee {
private:
    string name;
    string id;
    float baseSalary;

public:
    employee(string name, string id, float baseSalary);
    float TaxCalculate() = 0; 
    void employeeInfo();
};

#endif
