#include "Company.h"
#include <iostream>

Company::Company(const std::string _companyName, int _year, const std::string _location, CEO ceo) {
        companyName = _companyName;
        year = _year;
        location = _location;
        ceo = CEO();
    }

void Company::setCompanyName(const std::string _companyName) {
    companyName = _companyName;
}

void Company::setYear(int _year) {
    year = _year;
}

void Company::setLocation(const std::string _location) {
    location = _location;
}

std::string Company::getCompanyName() const { 
    return companyName; 
}

int Company::getYear() const {
    return year; 
}

std::string Company::getLocation() const {
    return location;
}

void Company::addCeo(CEO ceo){
    ceo = saveCeoData();
}

void Company::addPartialEmployee(PartialEmployee PEmployee) {
    PEmployee.push_back(PartialEmployee);
}

void Company::addCompleteEmployee(CompleteEmployee CEmployee) {
    CEmployee.push_back(CompleteEmployee);
}

std::string Company::showCeo(){
    return ceo;
}

std::string Company::showCompleteEmployees(){
    string message = "" ;
    for (int i = 0; i < CEmployee.size(); i++) {
    message = message + CEmployee[i];
    }   
    return message;
}

std::string Company::showPartialEmployees(){   
    string message = "" ;
    for (int i = 0; i < PEmployee.size(); i++) {
    message = message + PEmployee[i];
    }   
    return message;
}

std::string Company::showInfo() const {
    return "Company: " + companyName + "\nFoundation: " + to_string(year) + "\nLocation: " + location + "\n";
}
