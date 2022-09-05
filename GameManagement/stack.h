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

    // Template class constructor and destructor
    stack()=default;
    ~stack();

    // Template class methods
    void Push(T k);
    void Pop();

    // Template class data retrieval methods
    T TopElement();
    bool IsEmpty();

private:
    // template node struct to use with stack
    struct node{
        T data = NULL;
        node* prev = nullptr;
    };

    // top object to hold on to the most recent object pushed on stack
    node* top = new node;
};

#endif //PROGRAM3_MICHAELSHEA_STACK_H
