#include "CompleteEmployee.h"

CompleteEmployee::CompleteEmployee(float _salary, float _anualbonus) : Employee(_salary){
    salary = _salary;
    anualbonus = _anualbonus
}

float CompleteEmployee::getCompleteSalary() const override {
    completesalary = salary + anualbonus;
    return completesalary;
}

float PartialEmployee::getCalculateTax() const override {
    completesalary = completesalary * 0.25f; // 25% of tax according to salary and  anual bonus
    return completesalary
}

string PartialEmployee::getEmployeeInfo() const override {
    return "PartialEmployee: " + name + " - ID: " + id;
}
