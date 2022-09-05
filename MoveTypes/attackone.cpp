//
// Created by Michael Shea on 8/27/22.
//

#include "attackone.h"
#include "../ActorTypeCreate/actor.h"

// Public class constructor which passes the self and other actor object pointers to the battlemove constructor,
// sets the n variable for the foo4random() macro, and sets the damage variable randomly using the n variable's range
attackone::attackone(actor* self, actor* other) : battlemove(self, other) {
    int n = 5;
    damage = (int(foo4random()) + 10);
}

// Public Execute() method which calls the Hit() method on the other actor and passes the damage dealt
void attackone::Execute() {
    other->Hit(damage);
}

// Public Undo() method which calls the Heal() method on the other actor and passes the heal amount (damage)
void attackone::Undo() {
    other->Heal(damage);
}