#include "Employee.h"

Employee::Employee(string_name, string_id, float_salary){
    name = _name;
    id = _id;
    salary = _salary;
}

float Employee::getSalary(){
    return salary
}
void Employee::setEmployeeInfo(string){
    employeeInfo = "Employee: " + name + " - ID: " + id;
}
string Employee::getEmployeeInfo(){
    return employeeInfo
}
