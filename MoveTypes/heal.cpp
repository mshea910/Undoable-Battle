//
// Created by Michael Shea on 8/27/22.
//

#include "heal.h"
#include "../ActorTypeCreate/actor.h"

heal::heal(actor* self, actor* other) : battlemove(self, other) {
    int n = 5;
    damage = (foo4random() + 10);
}

void heal::Execute() {
    other->Heal(damage);
}

void heal::Undo() {
    other->Hit(damage);
}