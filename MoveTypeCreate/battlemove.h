//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
#define PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
#include "../ActorTypeCreate/actor.h"
#include "imove.h"

// Defining random number macro to use in attack classes
#define foo4random() (arc4random() % ((unsigned)n + 1))


class battlemove : public imove{
public:
    battlemove(actor*, actor*);

    actor* self;
    actor* other;

    enum MoveType{AttackOne, AttackTwo, Heal};
    enum ActorType{Ghost, Warrior, Knight};
};


#endif //PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
