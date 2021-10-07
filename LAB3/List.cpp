//
// Created by Orsolya on 07.10.2021.
//

#include "List.h"


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
}

int List::removeFirst() {

}










