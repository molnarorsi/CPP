//
// Created by Orsolya on 25.11.2021.
//

#include "Employee.h"

int Employee::counter = {0};

Employee::Employee(const string &lastName, const string &firstName, const int birthYear, const string &occupation) : Person(lastName, firstName, birthYear) {
    this->occupation = occupation;
    this->id = ++counter;
}

void Employee::print(ostream &out) const {
    out << "EMPLOYEE'S DATA: " << endl;
    out << "\t";
    Person::print(out);
    out << "\tOccupation: " << this->occupation << endl;
    out<< "\tID: " << this->id << endl;
}

int Employee::getId() const {
    return id;
}


