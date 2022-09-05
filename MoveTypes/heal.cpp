//
// Created by Michael Shea on 8/27/22.
//

#include "heal.h"
#include "../ActorTypeCreate/actor.h"

// Public class constructor which passes the self and other actor object pointers to the battlemove constructor,
// sets the n variable for the foo4random() macro, and sets the damage variable randomly using the n variable's range
heal::heal(actor* self, actor* other) : battlemove(self, other) {
    int n = 5;
    damage = (int(foo4random()) + 10);
}

// Public Execute() method which calls the Heal() method on the self actor and passes the heal amount
void heal::Execute() {
    self->Heal(damage);
}

// Public Undo() method which calls the Hit() method on the self actor and passes the damage amount
void heal::Undo() {
    self->Hit(damage);
}