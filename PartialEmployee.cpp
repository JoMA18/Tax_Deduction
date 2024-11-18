#include "PartialEmployee.h"

PartialEmployee::PartialEmployee(string _name, string _id, int _workedHour, float _hourSalary) : Employee(_salary){
    salary = _salary
    workedHour = _workedHour;
    hourSalary = _hourSalary;
}

float PartialEmployee::getPartialSalary() const override {
    Partialsalary = workedHour * hourSalary;
    PartialSalary = PartialSalary + salary
    return Partialsalary;
}

float PartialEmployee::getCalculateTax() const override {
    partialsalary = Partialsalary * 0.15f; // 15% of tax according to salary
    return partialsalary
}

string PartialEmployee::getEmployeeInfo() const override {
    return "PartialEmployee: " + name + " - ID: " + id;
}

