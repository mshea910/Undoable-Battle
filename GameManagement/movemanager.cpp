//
// Created by Michael Shea on 8/27/22.
//

#include "movemanager.h"
movemanager::movemanager() {
    gameStack = new stack<imove*>;
}

void movemanager::ExecuteMove(imove * move) {
    move->Execute();
    gameStack->push(move);
}

void movemanager::UndoLastMove() {
    imove* lastMove = gameStack->topElement();
    if(lastMove == nullptr){
        std::cout << "\n\nI'm sorry, there is nothing left to undo.\n" << std::endl;
        return;
    }
    lastMove->Undo();
    gameStack->pop();
}