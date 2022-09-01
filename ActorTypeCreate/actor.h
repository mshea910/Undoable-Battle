//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ACTOR_H
#define PROGRAM3_MICHAELSHEA_ACTOR_H
#include <iostream>
#include <vector>
#include "../GameManagement/movemanager.h"
#include "../CreationFactories/battlemovefactory.h"

class actor {
public:
    actor(int health, std::string type);
    void DoMove(movemanager mgr, battlemove::MoveType, actor* other);
    int Hit(int damage);
    int Heal(int amount);
    GetMoves();
    IsDead();

protected:
    std::string type;
    int health;
    std::vector <std::string> MoveType {"AttackOne", "AttackTwo", "Heal"};
};


#endif //PROGRAM3_MICHAELSHEA_ACTOR_H
