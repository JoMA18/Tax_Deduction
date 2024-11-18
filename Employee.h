#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    string name;
    string id;
    float salary;

public:
    Employee(string name, string id, float salary)

    float getSalary();
    void setEmployeeInfo(string);
    string getEmployeeInfo();
};

#endif
