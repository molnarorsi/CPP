//
// Created by Orsolya on 25.11.2021.
//

#ifndef LAB10_PERSON_H
#define LAB10_PERSON_H

#include <cstring>
#include <iostream>
using namespace std;


class Person {
protected:
    string lastName;
    string firstName;
    int birthYear;

public:
    Person(const string &lastName, const string &firstName, int birthYear);
    virtual void print(ostream &out = cout) const;
};

inline ostream& operator<<(ostream &out, const Person& person){
    person.print(out);
    return out;
}


#endif //LAB10_PERSON_H
