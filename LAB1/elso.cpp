//
// Created by Orsolya on 23.09.2021.
//

#include "elso.h"
#include <cmath>
#include <utility>

int countBits(int number) {
    int res = 0;
    while (number > 0) {
        res = res + number & 1;
        number >>=1;
    }
    return res;
}

bool setBit(int& number, int order) {
    bool ok = false;
    if( order < 0 || order > 31) {
        return ok;
    }
    number |= 1 << order;
    ok = true;
    return ok;
}

double mean(double array[], int numElements) {
    if (numElements == 0) {
        return NAN;
    }
    int sum = 0;
    for (int i = 0; i < numElements; i++) {
        sum += array[i];
    }
    return sum / numElements;
}

double stddev(double array[], int numElements) {
    if (numElements == 0) {
        return NAN;
    }
    double s = mean(array,numElements);
    double stdev=0;
    for(int i = 0; i< numElements; ++i){
        stdev = stdev + (array[i]-s)*(array[i]-s);
    }
    stdev = sqrt(stdev/numElements);
    return stdev;
}

std::pair<double, double> max2(double array[], int numElements) {
    double first, second;
    if (numElements == 0) {
        return std::make_pair(NAN, NAN);
    } else if (numElements == 1) {
        return std::make_pair(array[1], array[1]);
    }
    if (array[0] > array[1]) {
        first = array[0];
        second = array[1];
    } else {
        first = array[1];
        second = array[0];
    }
    for (int i = 2; i < numElements; ++i) {
        if (array[i] > first) {
            second = first;
            first = array[i];
        } else if (array[i] > second && array[i] != first) {
            second = array[i];
        }

    }
    return std::make_pair(first, second);
}