#include <iostream>
#include "Account.h"
#include "Customer.h"
#include "Bank.h"

int main() {
    cout << endl;
    cout << "**********************************************************************************" << endl;
    cout << "ACCOUNT CLASS" << endl;
    cout << "**********************************************************************************" << endl;
    cout<< endl;
    Account account1(0);
    Account account2(0);
    cout << "Number of accounts:  " << Account::getCounter() << endl;
    cout << "FIRST ACCOUNT'S TRANSACTIONS: " << endl;
    account1.print(cout);
    account1.deposit(1000);
    account1.print(cout);
    account1.withdraw(500);
    account1.print(cout);
    account1.withdraw(700);
    account1.print(cout);
    cout << endl;
    cout << endl;
    cout << "SECOND ACCOUNT'S TRANSACTIONS: " << endl;
    cout << account2;
    account2.deposit(4000);
    cout << account2;
    account2.withdraw(6000);
    cout << account2;
    account2.withdraw(400);
    cout << account2;
    cout << endl;
    cout << endl;

    cout << "**********************************************************************************" << endl;
    cout << "CUSTOMER CLASS" << endl;
    cout << "**********************************************************************************" << endl;
    cout << endl;
    Customer customer1("Henning", "Timea");
    Customer customer2("Henning", "Arthur");
    customer1.newAccount(0);
    customer1.newAccount(1000);
    customer1.newAccount(400);
    cout << customer1;
    cout << endl;
    customer2.newAccount(0);
    customer2.newAccount(2000);
    customer2.newAccount(3000);
    cout << customer2;
    cout << endl;
    customer1.deleteAccount(4);
    customer2.deleteAccount(8);
    cout << customer1 << customer2;
//    //EXCEPTION HANDLING
//    try {
//        cout << customer1.getAccount(7);
//    } catch (runtime_error &e) {
//        cout << e.what() << endl;
//    }
    cout << endl;
    //INDEX OPERATOR
    cout << customer1[2];
    cout << endl;
    //EXCEPTION HANDLING
    try {
        cout << customer2[10];
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }
    cout << endl;
    cout << "**********************************************************************************" << endl;
    cout << "BANK CLASS" << endl;
    cout << "**********************************************************************************" << endl;
    cout << endl;
    Bank bank1("CEC");
    vector<int> customersList = bank1.loadCustomers("customers.txt");
    bank1.printCustomers(cout);
    for(int & customerList : customersList) {
        bank1.getCustomer(customerList).newAccount(600);
        bank1.getCustomer(customerList).newAccount(2700);
    }
    bank1.getCustomer(2).getAccount(6).deposit(40);
    bank1.printCustomersAndAccounts(cout);

}