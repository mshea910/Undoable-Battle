//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_WARRIOR_H
#define PROGRAM3_MICHAELSHEA_WARRIOR_H
#include "../ActorTypeCreate/actor.h"

class warrior : public actor{
public:
    warrior();

    MoveType GetMoves() override;

protected:
    std::vector <MoveType> WarriorMoves {MoveType::AttackOne, MoveType::AttackTwo};
};


#endif //PROGRAM3_MICHAELSHEA_WARRIOR_H
