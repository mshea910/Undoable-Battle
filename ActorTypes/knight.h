//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_KNIGHT_H
#define PROGRAM3_MICHAELSHEA_KNIGHT_H
#include "../ActorTypeCreate/actor.h"

class knight : public actor{
public:
    knight();

    MoveType GetMoves() override;

protected:
    std::vector <MoveType> KnightMoves {MoveType::Heal, MoveType::AttackTwo};
};


#endif //PROGRAM3_MICHAELSHEA_KNIGHT_H
