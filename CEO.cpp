#include "CEO.h"

CEO::CEO() : ceoName("Default Name"), ceoSalary(0.0f) {}

CEO::CEO(const std::string ceoName, float ceoSalary) : ceoName(ceoName), ceoSalary(ceoSalary) {}

std::string CEO::getCeoName() const {
    return ceoName;
}

float CEO::getCeoSalary() const {
    return ceoSalary;
}

void CEO::setCeoName(const std::string _ceoName) {
    ceoName = _ceoName;
}

void CEO::setCeoSalary(float _ceoSalary) {
    ceoSalary = _ceoSalary;
}

float CEO::getCeoTax() const {
    return ceoSalary * 0.20f; // 20% of Tax
}

std::string CEO::saveCeoData() const {
    return "CEO: "+ ceoName + " Salary: " + std::to_string(getCeoSalary()) + "---> Tax: " + std::to_string(getCeoTax()) ;
}


