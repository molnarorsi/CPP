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
    out << "DATA OF EMPLOYEE WITH ID: " << this->id << endl;
    out << "\t" << "Employee name: " << this->lastName << " " << this->firstName
        << "\t\t" << "Birth year: " << this->birthYear
        << "\t\t" << "Occupation: " << this->occupation << endl;
}

int Employee::getId() const {
    return id;
}


