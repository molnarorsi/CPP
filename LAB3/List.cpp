//
// Created by Orsolya on 07.10.2021.
//

#include "List.h"

using namespace std;


List::List() {
    nodeCounter = 0;
    first = nullptr;
}

List::~List() {
    for(Node * p = first; p != nullptr;) {
        Node *n = p->next;
        delete p;
        p = n;
    }
    first = nullptr;
}

bool List::exists(int d) const {
    Node *p = first;
    while(p != nullptr) {
        if(p->value == d) {
            return true;
        }
        p = p->next;
    }
    return false;
}

int List::size() const {
    return nodeCounter;
}

bool List::empty() const {
    return (first == nullptr);
}

void List::insertFirst(int d) {

    Node *p = new Node(d, first);
    first = p;
    nodeCounter++;
}

int List::removeFirst() {
    if(empty()) {
        throw runtime_error("Error");
    }

    Node *p = first;
    //auto n = first->value;
    //delete first;
    first = p->next;
    nodeCounter--;
    return p->value;
}

void List::remove(int d, DeleteFlag df) {
    Node *p = first;

    if( (p->value < d && df == DeleteFlag::LESS) || (p->value == d && df == DeleteFlag::EQUAL) || (p->value > d && df == DeleteFlag::GREATER) ){
        removeFirst();
        return;
    }

    for ( Node *x = first; x ; x = x->next) {

        if( (x->value < d && df == DeleteFlag::LESS) || (x->value == d && df == DeleteFlag::EQUAL) || (x->value > d && df == DeleteFlag::GREATER) ) {
            p->next = x->next;
            return;
        }
        p = x;
    }
}

void List::print() const {
    Node *p = first;
    while(p != nullptr) {
        cout << p->value << '\t';
        p = p->next;
    }
}














