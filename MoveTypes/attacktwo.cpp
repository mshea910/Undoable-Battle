//
// Created by Michael Shea on 8/27/22.
//

#include "attacktwo.h"
#include "../ActorTypeCreate/actor.h"

attacktwo::attacktwo(actor* self, actor* other) : battlemove(self, other) {
    int n = 25;
    damage = foo4random();
}

void attacktwo::Execute() {
    other->Hit(damage);
}

void attacktwo::Undo() {
    other->Heal(damage);
}