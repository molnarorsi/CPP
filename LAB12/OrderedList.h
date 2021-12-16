//
// Created by Orsolya on 16.12.2021.
//

#ifndef LAB12_ORDEREDLIST_H
#define LAB12_ORDEREDLIST_H

#include <iostream>
#include "Iterator.h"
using namespace std;

template<class T, class LessComp = less<T>, class Equal = equal_to<T> >
class Iterator;

template<class T, class LessComp = less<T>, class Equal = equal_to<T> >
class OrderedList {
private:
    friend class Iterator;
    struct Node {
        T value;
        Node* next;
        Node(T value = T(), Nodee* next = nullptr);
    };
    Node* first = nullptr;
    int elementNr = 0;

public:
    OrderedList();
    ~OrderedList();
    bool isEmpty();
    void insert(T);
    void remove(T);
    int size() const;
    int find(T);
    void listItems(ostream&);
};

template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::Node::Node(T value, OrderedList::Node *next) {
    this->value = value;
    this->next = next;
}


template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::OrderedList() {
//    elementNr = 0;
//    first = nullptr;
}


template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::~OrderedList() {
    while(first != nullptr) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }
}


template<class T, class LessComp, class Equal>
bool OrderedList<T, LessComp, Equal>::isEmpty() {
    if(size() < 0) {
        return true;
    }
    else {
        return false;
    }
}


template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::insert(T value) {
    Node* node = new Node(value);
    this->elementNr++;
    if(first == nullptr || !LessComp()(first->value, value)) {
        node->next = first;
        first = node;
        return;
    }

    Node* current = first;
    while(current->next != NULL && LessComp()(current->next->value, value)) {
        current = current->next;
    }
    node->next = current->next;
    current->next = node;
}


template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::remove(T value) {
    Node* prev = nullptr;
    Node *current = first;

    while(current && !Equal()(current->value, value)) {
        prev = current;
        current = current->next;
    }

    if(!current) {
        return;
    }

    if(prev) {
        prev->next = current->next;
    }
    else {
        first = first->next;
    }

    delete current;
}


template<class T, class LessComp, class Equal>
int OrderedList<T, LessComp, Equal>::size() const {
    return sizeof(*this);
}


template<class T, class LessComp, class Equal>
int OrderedList<T, LessComp, Equal>::find(T value) {
    Node* current = first;
    while(current) {
        if(!Equal()(current->value, value)) {
            return true;
        }
        current = current->next;
    }
    return false;
}


template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::listItems(ostream &) {
    Node* temp = first;
    while(temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}


#endif //LAB12_ORDEREDLIST_H