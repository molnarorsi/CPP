//
// Created by Orsolya on 25.11.2021.
//

#include "Manager.h"
#include <algorithm>

const string Manager:: manager_occupation= "Manager";

Manager::Manager(const string &lastName, const string &firstName, const int birthYear, const string &manager_occupation) : Employee(lastName, firstName, birthYear, occupation){

}

void Manager::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

void Manager::deleteEmployee(int ID) {
    employees.erase(remove_if(employees.begin(), employees.end(), [ID](Employee* employee) {
        return employee->getId() == ID;
    }), employees.end());
}

int Manager::numberOfEmployees() const {
    cout << "Number of employees: " << employees.size();
    return employees.size();
}

void Manager::print(ostream &out) const {
    out << endl;
    out << "MANAGER'S DATA: " << endl;
    out << "\tID: " << this->id
    << "\t\tFull name: " << this->lastName << " " << this->firstName
    << "\t\tOccupation: " << this->manager_occupation << endl;
    out << endl;
    out << "LIST OF MANAGER'S EMPLOYEES: " << endl;

    for_each(employees.begin(), employees.end(), [&out](Employee* employee) {
        out << "\t";
        employee->print(out);
    });

    out << endl;
}
