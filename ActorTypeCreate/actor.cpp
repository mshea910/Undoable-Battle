//
// Created by Michael Shea on 8/27/22.
//

#include "actor.h"

actor::actor(int health, std::string type) {
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

MoveType actor::GetMoves() {
    int n = 3;
    return MoveType(static_cast<MoveType>(foo4random() -1));
}

bool actor::IsDead() {
    if(this->health <= 0){
        return true;
    } else {
        return false;
    }
}

std::ostream &operator<<(std::ostream &output, const actor &a) {
    output << a.type;
}
