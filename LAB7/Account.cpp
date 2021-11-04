//
// Created by Orsolya on 01.11.2021.
//

#include "Account.h"

int Account::counter{0};

Account::Account(double balance) {
    this->balance = balance;
    ++counter;
}

void Account::deposit(double amount) {
    if(amount > 0) {
        balance += amount;
    }
}

bool Account::withdraw(double amount) {
    if( amount > balance ) {
        return false;
    }
    balance -= amount;
    return true;
}

int Account::getCounter() {
    return counter;
}

int Account::getId() const {
    return id;
}

double Account::getBalance() const {
    return balance;
}

void Account::print(ostream &os) const {
    if(this->balance == 0) {
        os << "Not enough funds! Transition not succeed!";
    }
    os << "Account's ID is: " << this->id << endl;
    os << "Account's balance is: " << "{ " << this->getBalance() << " } RON" << endl;
//    os << "Account's ID is: "<< getId() << endl;
//    os << "Account's balance is: " << "{ " << getBalance() << " } RON" << endl;
}

ostream &operator<<(ostream &os, const Account &account) {
    if(account.balance == 0) {
        throw runtime_error("Account has no funds!");
    }
    os << "Account's ID is: " << account.getId() << endl;
    os << "Account's balance is: " << "{ " << account.getBalance() << " } RON" << endl;

    return os;
}





