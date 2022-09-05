//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_RUNNER_H
#define PROGRAM3_MICHAELSHEA_RUNNER_H
#include "GameManagement/movemanager.h"
#include "CreationFactories/actorfactory.h"

class runner {
public:
    // Public class constructor
    runner();

    // Public class methods
    bool ActorChoice(actor*);
    bool GameLoop();

private:
    // Actor pointers declared
    actor* p1 = nullptr;
    actor* p2 = nullptr;

    // movemanager object created for game
    movemanager* game = new movemanager;

};


#endif //PROGRAM3_MICHAELSHEA_RUNNER_H
