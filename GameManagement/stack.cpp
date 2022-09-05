//
// Created by Michael Shea on 8/31/22.
//

#include "stack.h"

// Public destructor to clear used memory on the heap
template <class T> stack<T>::~stack() {
    while(!IsEmpty()){
        Pop();
    }
}

// Public Push() method to add item to stack
template <class T> void stack<T>::Push(T k) {
    // Create new node
    node* newNode = new node;

    // Stack overflow exception
    if(!newNode){
        throw std::bad_alloc();
    }

    // Assign new data to new node
    newNode->data = k;

    // Assign the location of top to the newNode's prev pointer
    newNode->prev = top;

    // Top is now the newNode
    top = newNode;

}

// Public IsEmpty() method to return true if the stack is empty and false if it is not
template <class T> bool stack<T>::IsEmpty() {
    if (this->top == nullptr){
        return true;
    } else {
        return false;
    }
}

// Public Pop() method to remove the top item from the stack
template <class T> void stack<T>::Pop() {
    // Create temp node
    node* temp = new node();

    // Stack underflow exception
    if(temp == nullptr){
        return;
    } else {
        // temp copies top
        temp = top;

        // top is now the previous item on the stack
        top = top->prev;

        // temp is freed from the stack
        free(temp);
    }
}

// Public TopElement() method to retrieve and return the data variable of the top node
template <class T> T stack<T>::TopElement() {
    T topEl = top->data;
    return topEl;
}

// Forward template declarations to fix linker errors
void linkErrFix(){
    stack<imove*> myObj;
    imove* test;
    myObj.TopElement();
    myObj.IsEmpty();
    myObj.Push(test);
    myObj.Pop();
}