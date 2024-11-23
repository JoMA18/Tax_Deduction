#include <iostream>
#include <string>
#include "company.h"
#include "employee.h"
#include "partialEmployee.h"
#include "completeEmployee.h"

using namespace std;

// Menu Info
void menu() {
    cout << "\nMENU" << endl;
    cout << "1. Company Information" << endl;
    cout << "2. Register CEO" << endl;
    cout << "3. Register Employee" << endl;
    cout << "4. Show Employees" << endl;
    cout << "5. Exit" << endl;
    cout << "\nChoose an option: ";
}

// Employee Menu Info
void typeofEmployeeMenu() {
    cout << "\nType of employee: " << endl;
    cout << "1. Complete Employee" << endl;
    cout << "2. Partial Employee" << endl;
    cout << "Choose an option: ";
}

// Ask Partial Employee Data
PartialEmployee datosPartialEmployee() {
    string name, id;
    float workedHours;
    cout << "\nEmployee's name: ";
    cin.ignore();
    getline(cin, name);
    cout << "ID: ";
    getline(cin, id);
    cout << "Worked Hours: ";
    cin >> workedHours;

    return PartialEmployee(name, id, workedHours);
}

// Ask Complete Employee Data
CompleteEmployee datosCompleteEmployee() {
    string name, id;
    float salary, bonus;
    cout << "\nEmployee's name: ";
    cin.ignore();
    getline(cin, name);
    cout << "ID: ";
    getline(cin, id);
    cout << "Salary: ";
    cin >> salary;
    cout << "Anual Bonus: ";
    cin >> bonus;

    return CompleteEmployee(name, id, salary, bonus);
}

// Ask CEO Data
CEO dataCEO(){
    string ceoName;
    float ceoSalary;
    cout << "\nCEO's name: ";
    cin.ignore();
    getline(cin, ceoName);
    cout << " Ceo Salary: ";
    cin >> ceoSalary;

    return CEO(ceoName, ceoSalary);
}


//Main
int main() {
    Company myCompany("NombreEmpresa", 2001, "Location", dataCEO());
    cout << "Welcome to the system!" << endl;
    int opcion;
    bool continuar = true;
    while (continuar) {
        menu(); // Call principal menu
        cin >> opcion;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid option. Try again!" << endl;
            continue;
}
        switch (opcion) {
            case 1:
                myCompany.showInfo(); // Call Company info
                cout << "-------------------" << endl;
                break;
            case 2: 
                myCompany.addCeo(dataCeo())
                myCompany.showCeo()
                cout << "-------------------" << endl;
            case 3: {
                int tipo;
                typeofEmployeeMenu(); // Employee Menu
                cin >> tipo;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid employee type. Try again!" << endl;
                    continue;
                }
                if (tipo == 1) {
                    myCompany.addCompleteEmployee(datosCompleteEmployee());
                    cout << "-------------------" << endl;
                } else if (tipo == 2) {
                    myCompany.addPartialEmployee(datosPartialEmployee());
                    cout << "-------------------" << endl;
                } else {
                    cout << "Invalid employee type. Try again!" << endl;
                }
                break;
            }
            case 4:
                myCompany.showCompleteEmployees();
                myCompany.showPartialEmployees();
                break;
            case 5:
                continuar = false; // Exit
                cout << "Exiting the system..." << endl;
                break;
            default:
                cout << "Invalid option. Try again!" << endl;
        }
    }
    return 0;
}
