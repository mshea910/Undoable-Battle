//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ACTOR_H
#define PROGRAM3_MICHAELSHEA_ACTOR_H
#include <iostream>
#include "../movemanager.h"
#include "movefactory.h"

class actor {
public:
    actor(int health, std::string type);
    void DoMove(movemanager mgr, moveType, actor* other);
    Hit(int damage);
    Heal(int amount);
    GetMoves();
    IsDead();

protected:
    string type;
    int health;
    vector <moveType>;
};


#endif //PROGRAM3_MICHAELSHEA_ACTOR_H
