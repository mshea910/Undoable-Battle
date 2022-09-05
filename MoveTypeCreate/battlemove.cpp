//
// Created by Michael Shea on 8/27/22.
//

#include "battlemove.h"
#include "../ActorTypeCreate/actor.h"

// Public class constructor to assign actors to their corresponding object pointer
battlemove::battlemove(actor* self, actor* other) {
    this->self = self;
    this->other = other;
}