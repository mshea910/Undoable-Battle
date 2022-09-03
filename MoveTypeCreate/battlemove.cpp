//
// Created by Michael Shea on 8/27/22.
//

#include "battlemove.h"
#include "../ActorTypeCreate/actor.h"

battlemove::battlemove(actor* self, actor* other) {
    this->self = self;
    this->other = other;
}