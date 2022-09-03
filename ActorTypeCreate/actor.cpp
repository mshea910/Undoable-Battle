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

int actor::GetMoves() {

}

int actor::IsDead() {

}

std::ostream &operator<<(std::ostream &output, const actor &a) {
    output << a.type;
}
