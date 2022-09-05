//
// Created by Michael Shea on 8/31/22.
//

#ifndef PROGRAM3_MICHAELSHEA_STACK_H
#define PROGRAM3_MICHAELSHEA_STACK_H
#include <iostream>
#include <string>
#include "../MoveTypeCreate/imove.h"

template <class T> class stack {
public:
    stack()=default;
    ~stack();

    void push(T k);
    void pop();
    T topElement();

    bool isEmpty();

private:
    struct node{
        T data = NULL;
        node* prev = nullptr;
    };

    node* top = new node;
};

#endif //PROGRAM3_MICHAELSHEA_STACK_H
