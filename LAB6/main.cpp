#include <iostream>
#include "Polynomial.h"

using namespace std;

int main() {
    int coefNumber;
    cout << "Enter the number of coefficients: \n";
    cin >> coefNumber;
    double *coef = new double[coefNumber];
    cout << "Enter " << coefNumber << " coefficients" << endl;
    for (int i = 0; i < coefNumber; ++i) {
        cin >> coef[i];
    }
    cout << "The coefficients are: \n";
    for (int i = 0; i < coefNumber; ++i) {
        cout << coef[i] << " ";
    }
    cout << endl;
    cout << "********************************************************************" << endl;
    Polynomial p1(3,coef);
    cout << p1;
}
