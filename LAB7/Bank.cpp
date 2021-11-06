//
// Created by Orsolya on 06.11.2021.
//

#include "Bank.h"
#include <fstream>
#include <sstream>

Bank::Bank(const string&) {
    this->name = name;
}

int Bank::newCustomer(const string &firstName, const string &lastName) {
    this->customers.emplace_back(firstName, lastName);
}

bool Bank::deleteCustomer(int id) {
//    for(Customer customer : customers) {
//        customers.erase(customers.begin() + customer.getAccount(id - 1));
//    }
}

Customer &Bank::getCustomer(int id) {
    for(Customer customer : customers) {
        if(customer.getId() == id) {
            return customer;
        }
    }
    throw runtime_error("This customer doesn't exist!");
}

void Bank::printCustomers(ostream &os) const {
    for(Customer customer : customers) {
        os << customer.getId() << ", " << customer.getFirstName() << " " << customer.getLastName();
    }
}

void Bank::printCustomersAndAccounts(ostream &os) const {
    for(Customer customer : customers) {
        os << customer.getId() << ", " << customer.getFirstName() << " " << customer.getLastName();
        for(int i = 0; i < customer.getNumAccounts(); i++) {
            os << "\t" << customer.getAccount(i);
        }
    }
}

vector<int> Bank::loadCustomers(const string &filename) {
    auto ss = istringstream{};
    ifstream f(filename);
    if(!f.is_open()) {
        throw runtime_error("Couldn't open file!");
    }
    ss >> f.rdbuf();
}