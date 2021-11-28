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
    void hireForManager(Manager manager, Employee *employee);
    void fireFromManager(Manager manager,  int employeeID);
    virtual void printEmployees(ostream &out = cout) const;
    virtual void printManagers(ostream &out = cout) const;

private:
    string name;
    vector<Employee*> employees;
};


#endif //LAB10_COMPANY_H
