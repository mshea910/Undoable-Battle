//
// Created by Michael Shea on 8/31/22.
//

#ifndef PROGRAM3_MICHAELSHEA_STACK_H
#define PROGRAM3_MICHAELSHEA_STACK_H
#include <iostream>
#include <string>

template <class T> class stack {
public:
    stack();
    ~stack();

    void push(T k);
    T pop();
    T topElement();

    bool isEmpty();

private:
    int top;
    T st[];
};

#endif //PROGRAM3_MICHAELSHEA_STACK_H
