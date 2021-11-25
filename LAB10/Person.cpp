//
// Created by Orsolya on 25.11.2021.
//

#include "Person.h"


Person::Person(const string &lastName, const string &firstName,const int birthYear) {
    this->lastName = lastName;
    this->firstName = firstName;
    this->birthYear = birthYear;
}

void Person::print(ostream &out) const {
    out << "PERSON'S DATA: " << endl;
    out << "\tLast name: " << this->lastName << endl;
    out << "\tFirst name: " << this->firstName << endl;
    out << "\tBirth year: " << this->birthYear << endl;
}