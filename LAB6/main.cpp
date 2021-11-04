#include <iostream>
#include "Polynomial.h"

using namespace std;

int main() {
    double coef1[] = {3,7,9,3};
    double coef4[] = {2,3,5,7,1,8};
    double coef5[] = {1,4,3};
    double coef6[] = {1,4,2};
    double coef7[] = {3,4,5};
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "CONSTRUCTOR" << endl;
    cout << "********************************************************************" << endl;
    Polynomial p1(3,coef1), p4(5, coef4), p5(2,coef5);
    Polynomial p6(2,coef6), p7(2,coef7);
    cout << p1 << endl;
    cout << p4 << endl;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "COPY CONSTRUCTOR" << endl;
    cout << "********************************************************************" << endl;
    Polynomial p2(p1);
    cout << p2 << endl;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "MOVE CONSTRUCTOR" << endl;
    cout << "********************************************************************" << endl;
    Polynomial p3 = std::move(p1);
    cout << p3 << endl;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "MOVE CONSTRUCTOR - EXCEPTION HANDLING" << endl;
    cout << "********************************************************************" << endl;
    try {
        cout << p1;
    } catch (out_of_range &e) {
        cout << e.what() << endl;
    }
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "DEGREE METHOD" << endl;
    cout << "********************************************************************" << endl;
    cout << "Degree of p2 is: " << p2.degree() << endl;
    cout << "Degree of p4 is: " << p4.degree() << endl;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "EVALUATE METHOD" << endl;
    cout << "********************************************************************" << endl;
    cout << p3.evaluate(2) << "\n";
    cout << p4.evaluate(3) << "\n";
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "DERIVATIVE METHOD" << endl;
    cout << "********************************************************************" << endl;
    cout << "The derivative of " << p3 << "is: " << p3.derivative() << "\n";
    cout << "The derivative of " << p4 << "is: " << p4.derivative() << "\n";
    //cout << p3.derivative() << "\n";
    //cout << p4.derivative() << "\n";
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "[] OPERATOR" << endl;
    cout << "********************************************************************" << endl;
    cout << p4[2];
    cout << endl;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "[] OPERATOR - EXCEPTION HANDLING" << endl;
    cout << "********************************************************************" << endl;
    try {
        int index;
        cout << "Enter the the index of coefficient you want to find for p4: ";
        cin >> index;
        cout << "The coefficient at " << index << "th index is: " << p4[index];
    } catch (out_of_range &e) {
        cout << e.what() << "\n";
    }
    cout << endl;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "- (NEGATIVE) OPERATOR" << endl;
    cout << "********************************************************************" << endl;
    cout << "The negative of " << p5 << " is:  " << endl;
    cout << -p5;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "+ (ADDITION) OPERATOR" << endl;
    cout << "********************************************************************" << endl;
    cout << p6 << "added with " << p7 <<"is:  " << endl;
    cout << (p6 + p7);
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "-(SUBSTRACTION) OPERATOR" << endl;
    cout << "********************************************************************" << endl;
    cout << p6 << "minus " << p7 << "is:  " << endl;
    cout << p6 - p7;
    cout << endl;
    cout << "********************************************************************" << endl;
    cout << "*(MULTIPLICATION) OPERATOR" << endl;
    cout << "********************************************************************" << endl;
    cout << p6 << "multiplied by " << p7 << "is:  " << endl;
    cout << p6 * p7;
    cout << endl;

}
