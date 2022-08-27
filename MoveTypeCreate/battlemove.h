//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
#define PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
#include "../ActorTypeCreate/actor.h"
#include "imove.h"


class battlemove : public imove{
public:
    battlemove(actor*, actor*);

private:
    actor* self;
    actor* other;

    const char* MoveType[]={};
    const char* ActorType[]={};
};


#endif //PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
