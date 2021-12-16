//
// Created by Orsolya on 16.12.2021.
//

#ifndef LAB12_ITERATOR_H
#define LAB12_ITERATOR_H

#include "OrderedList.h"
#include <iostream>

using namespace std;

template<class T, class LessComp = less<T>, class Equal = equal_to<T> >
class Iterator {
private:
    OrderedList< T, LessComp, Equal > &list;
    typename OrderedList< T, LessComp, Equal >::Node* act;
public:
    Iterator(OrderedList< T, LessComp, Equal > &list);
    bool hasNext();
    T next();
};

template<class T, class LessComp, class Equal>
Iterator<T, LessComp, Equal>::Iterator(OrderedList<T, LessComp, Equal> &list) {
    this->list = list;
}


template<class T, class LessComp, class Equal>
bool Iterator<T, LessComp, Equal>::hasNext() {
    return act != nullptr;
}


template<class T, class LessComp, class Equal>
T Iterator<T, LessComp, Equal>::next() {
    return act->value;
}

#endif //LAB12_ITERATOR_H
