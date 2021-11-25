//
// Created by Orsolya on 25.11.2021.
//

#ifndef LAB10_PERSON_H
#define LAB10_PERSON_H

#include <string.h>
#include <iostream>
using namespace std;


class Person {
protected:
    string lastName;
    string firstName;
    int birthYear;
    static int counter;

public:
    Person(const string &lastName, const string &firstName, int birthYear);
    virtual void print(ostream &out = cout) const;
    static int getCounter();
};

inline ostream& operator<<(ostream &out, const Person& person){
    person.print(out);
    return out;
}


#endif //LAB10_PERSON_H
