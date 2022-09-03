//
// Created by Michael Shea on 8/27/22.
//

#include "attackone.h"
#include "../ActorTypeCreate/actor.h"

attackone::attackone(actor* self, actor* other) : battlemove(self, other) {
    int n = 15;
    damage = foo4random();
}

void attackone::Execute() {
    other->Hit(damage);
}

void attackone::Undo() {
    other->Heal(damage);
}