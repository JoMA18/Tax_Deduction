#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <vector>
#include <iostream>
#include "PartialEmployee.h"
#include "CompleteEmployee.h"
#include "CEO.h"
using namespace std;

class Company {
private:
    std::string companyName;
    int year;
    CEO ceo;
    std::string location;
    vector<CompleteEmployee> CEmployee; // Composition: CompleteEmployee vector
    vector<PartialEmployee> PEmployee; // Composition: PartialEmployee vector

public:
    // Constructor
    Company(const std::string companyName, int year, const std::string location, CEO ceo);


    // Getters
    std::string getCompanyName() const;
    int getYear() const;
    std::string getLocation() const;

    // Setters
    void setCompanyName(const std::string companyName);
    void setYear(int year);
    void setLocation(const std::string location);

   

    // Add CEO and vectors
    void addCeo(CEO ceo);
    void addPartialEmployee(PartialEmployee PEmployee);
    void addCompleteEmployee(CompleteEmployee CEmployee);

    //Methods
    std::string showCeo();
    std::string showCompleteEmployees();
    std::string showPartialEmployees();
    std::string showInfo() const;


};

#endif

