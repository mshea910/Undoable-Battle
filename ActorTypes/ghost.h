//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_GHOST_H
#define PROGRAM3_MICHAELSHEA_GHOST_H
#include "../ActorTypeCreate/actor.h"

class ghost : public actor{
public:
    ghost();

    MoveType GetMoves() override;

protected:
    std::vector <MoveType> GhostMoves {MoveType::Heal, MoveType::AttackOne};
};


#endif //PROGRAM3_MICHAELSHEA_GHOST_H
