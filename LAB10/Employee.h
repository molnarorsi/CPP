//
// Created by Orsolya on 25.11.2021.
//

#ifndef LAB10_EMPLOYEE_H
#define LAB10_EMPLOYEE_H


#include "Person.h"

class Employee : public Person{
protected:
    string occupation;
    int id;
    static int counter;

public:
    Employee(const string &lastName, const string &firstName, const int birthYear, const string &occupation);
    virtual void print(ostream &out = cout) const;
    int getId() const;
};


#endif //LAB10_EMPLOYEE_H
