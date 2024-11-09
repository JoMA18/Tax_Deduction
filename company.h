#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <vector>
#include <memory>
#include "employee.h"
#include "taxDeduction.h"

class company {
    string companyName;
    string companyInfo;
    vector<unique_ptr<Employee>> employeeList;
    vector<taxDeduction> TotalDeduction;

public:
    Empresa(string companyName, string comapnyInfo);
    void newEmployee();
    void newDeduction();
    float totalTax();
    string financialResume();
};

#endif
