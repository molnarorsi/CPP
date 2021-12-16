#include <iostream>
#include "OrderedList.h"

int main() {
    OrderedList<int> list;

//insert
cout << "Elements in list: " << endl;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
//listItems
    list.listItems(cout);
//isEmpty
    cout << "Is the list empty? " << endl;
    cout << list.isEmpty() << endl;
//remove
    list.remove(2);
    cout << "Removed nr. 2 from list: " << endl;
    list.listItems(cout);
//find
    cout << "Find nr. 6 in list: " << endl;
    cout << list.find(6);
}
