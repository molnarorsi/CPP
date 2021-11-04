#include <iostream>
#include "Account.h"

int main() {
    Account account1(0);
    Account account2(0);
    cout << "Number of accounts:  " << Account::getCounter() << endl;
    cout << "First account's transactions: " << endl;
    account1.print(cout);
    account1.deposit(1000);
    account1.print(cout);
    account1.withdraw(500);
    account1.print(cout);
    account1.withdraw(1000);
    account1.print(cout);



//    account1.withdraw(1000);
//    cout << account1.getBalance();
}
