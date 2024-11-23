#include "Employee.h"

Employee::Employee(const std::string name, const std::string id) : name(name), id(id) {}

void Employee::setName(const std::string _name) {
    name = _name;
}

void Employee::setId(const std::string _id) {
    id = _id;
}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getID() const
{
    return id;
}


std::string Employee::showInfo(){
    return "The employee name is: " +  name + " and the ID: " + id;
}

