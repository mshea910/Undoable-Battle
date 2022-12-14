//
// Created by Michael Shea on 8/27/22.
//

#include "battlemovefactory.h"

// Public BuildMove() method which takes a MoveType, the actor performing a move, and the actor receiving the action
// of the move, builds the corresponding battlemove subclass, and returns the battlemove.
battlemove *battlemovefactory::BuildMove(MoveType type, actor *self, actor *other) {
    battlemove* m;
    switch(type){
        case MoveType::AttackOne:
            m = new attackone(self, other);
            break;
        case MoveType::AttackTwo:
            m = new attacktwo(self, other);
            break;
        case MoveType::Heal:
            m = new heal(self, other);
            break;
    }
    return m;
}