#include "PartialEmployee.h"



PartialEmployee::PartialEmployee(const std::string name, const std::string id, float workedHour): Employee(name, id), workedHour(workedHour) {}

int PartialEmployee::getWorkedHour() const {
    return workedHour;
}
void PartialEmployee::setWorkedHour(float _workedHour){
    workedHour = _workedHour;
}

float PartialEmployee::getPartialSalary() const {
    return workedHour * 50.0f; // 100 hundred of salary per hour
}

float PartialEmployee::getCalculateTax() const {
    float tax = getPartialSalary() *  0.12f; // 12% of tax 
    return tax;
}

std::string PartialEmployee::saveData() const {
    return "Partial Employee: " + name + " ID:" + id + " Salary: " + std::to_string(getPartialSalary()) + "---> Tax:" + std::to_string(getCalculateTax()) + "\n";
}

