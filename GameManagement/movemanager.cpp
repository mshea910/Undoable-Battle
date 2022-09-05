//
// Created by Michael Shea on 8/27/22.
//

#include "movemanager.h"

// Public class constructor that initializes gameStack with a new stack object
movemanager::movemanager() {
    gameStack = new stack<imove*>;
}

// Public ExecuteMove() method that takes an imove object
void movemanager::ExecuteMove(imove * move) {
    // Perform the corresponding Execute() method for the passed-in imove object
    move->Execute();

    // Take the move and pass it to the Push() method of the stack object
    gameStack->Push(move);
}

// Public UndoLastMove() method to pull the last imove object from the stack and "undo" its action
void movemanager::UndoLastMove() {
    // Create temporary imove object pointer and assign to it the top object of the gameStack
    imove* lastMove = gameStack->TopElement();

    // If the imove is nullptr (Nothing left on the stack), state that and return
    if(lastMove == nullptr){
        std::cout << "\n\nI'm sorry, there is nothing left to undo.\n" << std::endl;
        return;
    }

    // Perform the corresponding Undo() method of the lastMove imove object
    lastMove->Undo();

    // Pop the top imove object (lastMove) from the stack
    gameStack->Pop();
}