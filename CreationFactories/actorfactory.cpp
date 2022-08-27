//
// Created by Michael Shea on 8/27/22.
//

#include "actorfactory.h"

static actor* actorfactory::CreateActor(ActorType actor) {
    switch(actor){
        case ActorType::Ghost:
            return new ghost;
        case ActorType::Knight:
            return new knight;
        case ActorType::Warrior:
            return new warrior;
    }
}