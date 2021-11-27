//
// Created by Orsolya on 27.11.2021.
//

#include "Company.h"

Company::Company(string name) {
    this->name = name;
}

void Company::hire(Employee *employee) {
    this->employees.emplace_back(employee);
}

void Company::fire(int ID) {
    employees.erase(remove_if(employees.begin(), employees.end(), [ID](Employee* employee) {
        return employee->getId() == ID;
    }));
}

void Company::hireForManager(int ID) {
    for(Employee* employee : employees) {
        if(dynamic_cast<Manager*>(employee)) {
            hire(employee);
        }
    }
}

void Company::fireFromManager(int ID) {
    for(Employee* employee : employees) {
        if(dynamic_cast<Manager*>(employee)) {
            employees.erase(remove_if(employees.begin(), employees.end(), [ID](Employee* employee) {
                return employee->getId() == ID;
            }));
        }
    }
}

const string &Company::getName() const {
    return name;
}

void Company::setName(const string &name) {
    Company::name = name;
}

void Company::printManagers(ostream &out) const {
    for(Employee* employee : employees) {
        if(dynamic_cast<Manager*>(employee)) {
            employee->print(out);
        }
    }
}

void Company::printEmployees(ostream &out) const {
    for(Employee* employee : employees) {
        employee->print(out);
    }
}




