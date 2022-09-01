//
// Created by Michael Shea on 8/31/22.
//

#include "stack.h"

template <class T> stack<T>::stack() {
    top = -1;
}

template <class T> void stack<T>::push(T k) {
    std::cout << "Inserted element " << k << std::endl;
    top = top + 1;

    st[top] = k;
}

template <class T> bool stack<T>::isEmpty() {
    if (top == -1){
        return true;
    } else {
        return false;
    }
}

template <class T> T stack<T>::pop() {
    T popEl = st[top];
    top--;

    return popEl;
}

template <class T> T stack<T>::topElement() {
    T topEl = st[top];

    return topEl;
}