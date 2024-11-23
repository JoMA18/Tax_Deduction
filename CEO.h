#ifndef CEO_H
#define CEO_H

#include <string>
using namespace std;

class CEO {
private:
    std::string ceoName;
    float ceoSalary;

public:
    //Constructor
    CEO(); 
    CEO(const string ceoName, float salary);

    //Getters
    std::string getCeoName() const;
    float getCeoSalary() const;

    //Setteres
    void setCeoName(const string name);
    void setCeoSalary(float salary);
    float getCeoTax() const;

    //Method
    std :: string saveCeoData() const;
};
