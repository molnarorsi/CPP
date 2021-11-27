//
// Created by Orsolya on 25.11.2021.
//

#ifndef LAB10_MANAGER_H
#define LAB10_MANAGER_H

#include "Employee.h"
#include <algorithm>
#include <vector>
using namespace std;

class Manager : public Employee {
public:
    Manager(const string &lastName, const string &firstName, int birthYear, const string &manager_occupation);
    void addEmployee(Employee* employees);
    void deleteEmployee(int ID);
    int numberOfEmployees() const;
    virtual void print(ostream &out = cout) const;
    static const string manager_occupation;

private:
    vector<Employee*> employees;
};


#endif //LAB10_MANAGER_H
