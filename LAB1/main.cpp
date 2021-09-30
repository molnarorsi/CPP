#include <iostream>
using namespace std;
#include "elso.h"

int main() {

//    for(int i = 0; i < 128; ++i) {
//        cout << countBits(i) << endl;
//    }
//    cout << endl;
//
//    for (int i = 0; i < 35; ++i) {
//        int n = 0;
//        if(setBit(n, i)){
//            cout<<i<<" ---> " << n <<endl;
//        }else{
//            cout<<"Impossible operation!" << endl;
//        }
//    }
//
//    double a[] = {1, 2, 3, 4, 5, 6};
//    int numElements=6;
//    cout << mean(a, numElements) << endl;
//
//    double a[] = {20,10,15,15};
//    int numElements=4;
//    cout<<stddev(a,numElements) <<endl;

    double a[] = {20,10,15,23};
    int numElements = 4;
    pair<double,double> p = max2(a,numElements);
    cout << p.first << ", " << p.second << endl;
}

