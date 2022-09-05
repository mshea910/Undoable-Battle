//
// Created by Michael Shea on 8/31/22.
//

#include "stack.h"

template <class T> stack<T>::~stack() {
    delete[] *st;
}

template <class T> void stack<T>::push(T k) {
    top = top + 1;
    st[top] = k;
}

template <class T> bool stack<T>::isEmpty() {
    if (this->top == -1){
        return true;
    } else {
        return false;
    }
}

template <class T> void stack<T>::pop() {
    delete st[top];
    top--;
}

template <class T> T stack<T>::topElement() {
    T topEl = st[top];
    return topEl;
}

void linkErrFix(){
    stack<imove*> myObj;
    imove* test;
    myObj.topElement();
    myObj.isEmpty();
    myObj.push(test);
    myObj.pop();
}