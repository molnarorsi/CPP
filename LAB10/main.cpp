#include <iostream>
#include "Person.h"
#include "Employee.h"

int main() {
    Person person1("Henning", "Timea", 1991);
    person1.print(cout);

    Person person2("Molnar", "Judith", 1971);
    person2.print(cout);

    Employee employee1("Bartha", "Robert", 1990, "IT");
    employee1.print(cout);

    Employee employee2("Tamas", "Agota", 2000, "IT");
    employee2.print(cout);
}
