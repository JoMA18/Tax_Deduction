#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>


class Employee {
protected: // Super Class
    std::string name;
    std::string id;

public:
    // Constructor
    Employee( const std::string name, const std::string id);

    // Getters
    std::string getName() const; 
    std::string getID() const;

    // Setters
    void setName(const std::string name);
    void setId(const std::string id);

    // Method
    std::string showInfo();

};

#endif
