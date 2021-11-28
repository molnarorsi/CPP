#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Manager.h"
#include "Company.h"

int main() {
    Person person1("Henning", "Timea", 1991);
    person1.print(cout);

    Person person2("Molnar", "Judith", 1971);
    person2.print(cout);

    cout << endl;

    Employee employee1("Bartha", "Robert", 1990, "Web Developer");
    employee1.print(cout);

    cout << endl;

    Employee employee2("Tamas", "Agota", 2000, "System Engineer");
    employee2.print(cout);

    cout << endl;

    Employee employee3("Bancsiko", "David", 1998, "Software Developer");
    employee3.print();

    cout << endl;

    Employee employee4("Molnar", "Istvan", 1968, "Software Developer");
    Employee employee5("Bartha", "Tunde", 1974, "Data Scientist");
    Employee employee6("Nagy", "Lehel", 1989, "Cloud Engineer");
    Employee employee7("Basa", "Gergo", 1994, "Security Architect");

    Manager manager1("Henning", "Arthur", 1991, manager1.manager_occupation);
    manager1.print(cout);

    Manager manager2("Nemeth", "Kata", 1993, manager2.manager_occupation);
    Manager manager3("Takacs", "Dorina", 1988, manager3.manager_occupation);

    manager2.addEmployee(&employee4);
    manager2.addEmployee(&employee5);

    manager3.addEmployee(&employee6);
    manager3.addEmployee(&employee7);

    cout << "*************************************************************************************************" << endl;
    cout << "                                         ADD EMPLOYEE                                            " << endl;
    cout << "*************************************************************************************************" << endl;

    manager1.addEmployee(&employee1);
    manager1.addEmployee(&employee3);
    manager1.addEmployee(&employee2);
    manager1.print(cout);

    manager1.numberOfEmployees();
    cout << endl;

    cout << "*************************************************************************************************" << endl;
    cout << "                                         DELETE EMPLOYEE                                            " << endl;
    cout << "*************************************************************************************************" << endl;

    manager1.deleteEmployee(1);

    cout << endl;

    manager1.print(cout);

    manager1.numberOfEmployees();

    cout << endl;

    cout << "*************************************************************************************************" << endl;
    cout << "                                         COMPANY CLASS                                           " << endl;
    cout << "*************************************************************************************************" << endl;

    Company company1("8x8");

    company1.hire(&employee1);
    company1.hire(&employee2);
    company1.hire(&employee3);
    company1.hire(&employee4);
    company1.hire(&employee5);
    company1.hire(&employee6);
    company1.hire(&employee7);
    company1.hire(&manager1);
    company1.hire(&manager2);
    company1.hire(&manager3);
    cout << endl;
    cout << "List of all employees, includig managers: " << endl;
    cout << endl;
    company1.printEmployees(cout);
    cout << endl;
    cout << "List of managers: " << endl;
    company1.printManagers(cout);

    cout << "Adding employee with ID 7 to manager2, then removing employee7 from manager3:" << endl;
    company1.hireForManager(manager2, &employee7);
    company1.fireFromManager(manager3, 7);
    company1.printEmployees(cout);

}
