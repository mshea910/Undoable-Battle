//
// Created by Michael Shea on 8/27/22.
//

#include "actor.h"
#include <utility>


actor::actor(int health, ActorType type) {
    this->health = health;
    this->type = type;
}

void actor::DoMove(movemanager mgr, MoveType move, actor *other) {
    std::cout << *this << " used: " << MoveStrings[static_cast<int>(move)] << std::endl;
    mgr.ExecuteMove(battlemovefactory::BuildMove(move, this, other));
}

int actor::Hit(int damage) {
    return this->health -= damage;
}

int actor::Heal(int amount) {
    return this->health += amount;
}

int actor::GetHealth() const {
    return this->health;
}

bool actor::IsDead() const {
    if(this->health <= 0){
        return true;
    } else {
        return false;
    }
}

std::ostream &operator<<(std::ostream &output, const actor &a) {
    return output << a.ActorStrings[static_cast<int>(a.type)];
}
