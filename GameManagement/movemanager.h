//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_MOVEMANAGER_H
#define PROGRAM3_MICHAELSHEA_MOVEMANAGER_H
#include "stack.h"
#include "../MoveTypeCreate/imove.h"


class movemanager {
public:
    movemanager();
    ~movemanager();

    void ExecuteMove(imove*);
    void UndoLastMove();

private:
    stack<imove*>* gameStack;
};


#endif //PROGRAM3_MICHAELSHEA_MOVEMANAGER_H
