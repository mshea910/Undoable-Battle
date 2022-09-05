//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ACTOR_H
#define PROGRAM3_MICHAELSHEA_ACTOR_H
#include <iostream>
#include <vector>
#include "../GameManagement/movemanager.h"
#include "../CreationFactories/battlemovefactory.h"
#include "../GameManagement/Enums.h"


class actor {
public:
    actor(int health, ActorType type);
    void DoMove(movemanager mgr, MoveType, actor* other);
    int Hit(int damage);
    int Heal(int amount);
    virtual MoveType GetMoves()=0;
    [[nodiscard]] int GetHealth() const;
    [[nodiscard]] bool IsDead() const;

    friend std::ostream &operator<<(std::ostream &output, const actor &a);

protected:
    ActorType type;
    int health;
    std::vector <std::string> MoveStrings {"Attack One", "Attack Two", "Heal"};
    std::vector <std::string> ActorStrings {"Ghost", "Knight", "Warrior"};
};


#endif //PROGRAM3_MICHAELSHEA_ACTOR_H
