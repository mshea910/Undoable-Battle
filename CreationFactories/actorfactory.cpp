//
// Created by Michael Shea on 8/27/22.
//

#include "actorfactory.h"

static actor* actorfactory::CreateActor(battlemove::ActorType actor) {
    switch(actor){
        case battlemove::ActorType::Ghost:
            return new ghost;
        case battlemove::ActorType::Knight:
            return new knight;
        case battlemove::ActorType::Warrior:
            return new warrior;
    }
}