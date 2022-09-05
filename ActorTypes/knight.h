//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_KNIGHT_H
#define PROGRAM3_MICHAELSHEA_KNIGHT_H
#include "../ActorTypeCreate/actor.h"

class knight : public actor{
public:
    // Public class constructor
    knight();

    // Virtual method override from actor class
    MoveType GetMoves() override;

protected:
    // Vector of MoveTypes specific to the Knight actor
    std::vector <MoveType> KnightMoves {MoveType::Heal, MoveType::AttackTwo};
};


#endif //PROGRAM3_MICHAELSHEA_KNIGHT_H
