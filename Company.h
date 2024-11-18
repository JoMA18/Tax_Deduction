#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <vector>
#include "Employee.h"
#include "TaxDeduction.h"

class Company {
private:
    string companyName;
    string companyInfo;
    vector<Employee*> employees;
    TaxDeduction deduction;

public:
    Company(const string companyName, const string companyInfo);

    void setEmployee(Employee*);
    string getEmployee();
    float getDeduction();
    void setTotalTax(float);
    float getTotalTax();
    string getCompanyInfo();
};

#endif
