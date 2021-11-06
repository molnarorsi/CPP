//
// Created by Orsolya on 06.11.2021.
//

#include "Customer.h"
#include <iostream>
using namespace std;

int Customer::counter = {0};

Customer::Customer(const string &firstName, const string &lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = ++counter;
    //counter++;
}

const string &Customer::getFirstName() const {
    return firstName;
}

void Customer::setFirstName(const string &firstName) {
    this->firstName = firstName;
}

const string &Customer::getLastName() const {
    return lastName;
}

void Customer::setLastName(const string &lastName) {
    this->lastName = lastName;
}

int Customer::getNumAccounts() const {
    return accounts.size();
}

Account &Customer::getAccount(int id) {
    for(int i = 0; i < accounts.size(); i++) {
        if(accounts[i].getId() == id) {
            return accounts[i];
        }
    }
    throw runtime_error("This account doesn't exist!");
}

int Customer::newAccount(double balance) {
    this->accounts.emplace_back(balance);
}

bool Customer::deleteAccount(int id) {
    auto end = accounts.end();
    auto it = accounts.erase(find_if(accounts.begin(), accounts.end(), [=](Account &account) {
        return account.getId() == id;
    }));
    return end == it;
}

void Customer::print(ostream &os) const {
    os << this->id << " " << this->firstName << " " << this->lastName << endl;

    for(const Account &account :accounts) {
       os << "\t" << account << "\n";
    }
}

ostream &operator<<(ostream &os, const Customer &customer) {
    customer.print(os);
    return os;
}

Account &Customer::operator[](int index) {
    return accounts[index];
}

const Account &Customer::operator[](int index) const {
    if(index < 0 || index >= this->getNumAccounts()) {
        throw runtime_error("This account doesn't exist!");
    }
    return accounts[index];
}