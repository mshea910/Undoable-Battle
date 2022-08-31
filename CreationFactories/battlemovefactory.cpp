//
// Created by Michael Shea on 8/27/22.
//

#include "battlemovefactory.h"

battlemove *battlemovefactory::BuildMove(battlemove::MoveType type, actor *self, actor *other) {
    battlemove* m;
    switch(type){
        case battlemove::MoveType::AttackOne:
            m = new attackone(self, other);
            break;
        case battlemove::MoveType::AttackTwo:
            m = new attacktwo(self, other);
            break;
        case battlemove::MoveType::Heal:
            m = new heal(self, other);
            break;
    }
    return m;
}