//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_RUNNER_H
#define PROGRAM3_MICHAELSHEA_RUNNER_H
#include "GameManagement/movemanager.h"
#include "CreationFactories/actorfactory.h"

class runner {
public:
    runner();

    void ActorChoice(actor*);
    bool GameLoop();

private:
    actor* p1;
    actor* p2;

};


#endif //PROGRAM3_MICHAELSHEA_RUNNER_H
