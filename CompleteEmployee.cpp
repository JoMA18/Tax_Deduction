#include "CompleteEmployee.h"

CompleteEmployee::CompleteEmployee(const std::string name, const std::string id, float salary, float anualBonus)
    : Employee(name, id), salary(salary), anualBonus(anualBonus) {}

void CompleteEmployee::setSalary(float _salary) {
    salary = _salary;
}

void CompleteEmployee::setAnualBonus(float _anualBonus) {
    anualBonus = _anualBonus;
}

float CompleteEmployee::getSalary() const{
    return salary;
}

float CompleteEmployee::getAnualBonus() const{
    return anualBonus;
}

float CompleteEmployee::getCompleteSalary() const{
    return salary + anualBonus;
}

float CompleteEmployee::getCalculateTax() const{
    float tax = (getCompleteSalary()) * 0.15f; // 15% of tax
    return tax;
}

std::string CompleteEmployee::saveData() const {
    return "Complete Employee: " + name + " ID:" + id + " Salary: " + std::to_string(getCompleteSalary()) + "---> Tax:" + std::to_string(getCalculateTax()) + "\n";
}
