#include "Company.h"

Company::Company(string _companyName, string _companyInfo){
    companyName = _companyName;
    companyInfo = _companyInfo;
}

void setEmployee(Employee*) : Employee(_name,_id){
    employee = _name + _id;
}
string getEmployee(){
    return employee
}
void setTotalTax(float) : TaxDeduction(_totalTax){
    TotalTax = _totalTax;
}
float getTotalTax(){
    return TotalTax
}
string getCompanyInfo(){
    return "Company Name: " + companyName + "\n - Company Info: " + companyInfo;
}
