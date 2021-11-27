//
// Created by Orsolya on 27.11.2021.
//

#ifndef LAB10_COMPANY_H
#define LAB10_COMPANY_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

#include "Employee.h"
#include "Manager.h"

using namespace std;

class Company {
public:
    Company(string name);
    void hire(Employee* employee);
    void fire(int ID);
    void hireForManager(int ID);
    void fireFromManager(int ID);
    virtual void printEmployees(ostream &out = cout) const;
    virtual void printManagers(ostream &out = cout) const;

    const string &getName() const;

    void setName(const string &name);

private:
    string name;
    vector<Employee*> employees;
};


#endif //LAB10_COMPANY_H
