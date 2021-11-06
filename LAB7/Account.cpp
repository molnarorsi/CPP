//
// Created by Orsolya on 01.11.2021.
//

#include "Account.h"

int Account::counter{0};

Account::Account(double balance) {
    this->balance = balance;
    this->id = ++counter;
    //++counter;
}

void Account::deposit(double amount) {
    if(amount > 0) {
        balance += amount;
    }
}

bool Account::withdraw(double amount) {
    if( amount > balance ) {
        cout << "You can't withdraw " << amount << " RON. Please try again!" << endl;
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
//    os <<  "Account's ID is: " << this->id << endl;
//    os << "Account's balance is: " << this->balance << " RON" << endl;
    os << "Account ID is: " << this->id << "; current balance: " << this->balance << " RON" << endl;


}

ostream &operator<<(ostream &os, const Account &account) {
    account.print(os);
    return os;
}





