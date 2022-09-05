//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ACTOR_H
#define PROGRAM3_MICHAELSHEA_ACTOR_H
#include <iostream>
#include <vector>
#include <utility>
#include <future>
#include "../GameManagement/movemanager.h"
#include "../CreationFactories/battlemovefactory.h"
#include "../GameManagement/Enums.h"


class actor {
public:
    // Public Constructor
    actor(int health, ActorType type);

    // Public data manipulation methods
    void DoMove(movemanager mgr, MoveType, actor* other);
    int Hit(int damage);
    int Heal(int amount);

    // Virtual functions implemented by various actor types
    virtual MoveType GetMoves()=0;

    // Public data retrieval methods
    [[nodiscard]] int GetHealth() const;
    [[nodiscard]] bool IsDead() const;

    // Class operator<< override
    friend std::ostream &operator<<(std::ostream &output, const actor &a);

protected:
    ActorType type;
    int health;

    // Vectors to hold the string values of a corresponding enum type. Useful for printing out game updates
    std::vector <std::string> MoveStrings {"Attack One", "Attack Two", "Heal"};
    std::vector <std::string> ActorStrings {"Ghost", "Knight", "Warrior"};
};


#endif //PROGRAM3_MICHAELSHEA_ACTOR_H
