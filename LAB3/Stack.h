//
// Created by Orsolya on 08.10.2021.
//

#ifndef CPP_STACK_H
#define CPP_STACK_H
#include "List.h"


class Stack {
    private:
        List data;
    public:
        Stack() {};
        void push(int e);
        int pop();
        bool isEmpty() const;
};


#endif //CPP_STACK_H
