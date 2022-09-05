//
// Created by Michael Shea on 8/31/22.
//

#include "stack.h"

template <class T> stack<T>::~stack() {
    while(!isEmpty()){
        pop();
    }
}

template <class T> void stack<T>::push(T k) {
    node* temp = top;
    top->data = k;
    top->prev = temp;

}

template <class T> bool stack<T>::isEmpty() {
    if (this->top == nullptr){
        return true;
    } else {
        return false;
    }
}

template <class T> void stack<T>::pop() {
    node* temp = top;
    top = top->prev;
    delete temp;
}

template <class T> T stack<T>::topElement() {
    T topEl = top->data;
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