//
// Created by Orsolya on 08.10.2021.
//

#include "Stack.h"


void Stack::push(int e) {
    data.insertFirst(e);
    //this->data.insertFirst(e);
}

int Stack::pop() {
    if(data.empty()) {
        throw runtime_error("Empty stack");
    }
    return data.removeFirst();
}

bool Stack::isEmpty() const {
    return data.empty();
}






