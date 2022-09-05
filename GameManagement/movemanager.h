//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_MOVEMANAGER_H
#define PROGRAM3_MICHAELSHEA_MOVEMANAGER_H
#include "stack.h"
#include "../MoveTypeCreate/imove.h"


class movemanager {
public:
    // Public class constructor
    movemanager();

    // Public class methods
    void ExecuteMove(imove*);
    void UndoLastMove();

private:
    // Stack of imoves to use with game
    stack<imove*>* gameStack;
};


#endif //PROGRAM3_MICHAELSHEA_MOVEMANAGER_H
