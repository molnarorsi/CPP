
#include "List.h"
#include "Stack.h"
using namespace std;

int main() {
    List myList;
    int n;
    cout << "Enter number of elements in list:";
    cin >> n;

    for(int i = 0; i < n; i++) {
        myList.insertFirst(i);
    }
    myList.print();
    cout << endl;
    cout << "Is the list empty? ";
    cout << myList.empty() << endl;
    cout << "The size of the list is: " << myList.size() << endl;
    int x;
    cout << "Check if your number is in the list: ";
    cin >> x;
    cout << myList.exists(x) << endl << endl;
    //myList.removeFirst();
    //myList.removeFirst();
    cout << "First number less than 2 deleted: " << endl;
    myList.remove(2,List::DeleteFlag::LESS);
    myList.print();
    cout << endl << endl;
    cout << "***********STACK*************" << endl << endl;

    Stack myStack;
    int e;
    cout << "Enter number of elements in stack:";
    cin >> e;
    for ( int i = 0; i < e; i++) {
        myStack.push(i);
    }

    cout << "Is the stack empty? ";
    cout << myStack.isEmpty() << endl;

    for(int i = 0; i < e; i++) {
        cout << myStack.pop() << endl;
    }
    cout << "Is the stack empty? ";
    cout << myStack.isEmpty() << endl;


}
