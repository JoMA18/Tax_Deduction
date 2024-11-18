#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    string name;
    string id;
    float salary;

public:
    Employee(const string, const string)

    virtual float getSalary() const = 0;
    virtual void setEmployeeInfo(string);
    virtual string getEmployeeInfo() const = 0;
};

#endif
