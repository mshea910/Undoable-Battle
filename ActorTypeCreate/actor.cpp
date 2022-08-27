//
// Created by Michael Shea on 8/27/22.
//

#include "actor.h"

actor::actor(int health, std::string type) {
    this->health = health;
    this->type = type;
}

void actor::DoMove(int mgr, int, actor *other) {
    cout << *this << " used: " << MoveTypeStrings[static_cast<int>(moveType)] << endl;
    mgr.ExecuteMove(MoveFactory::BuildMove(moveType, this, other));
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
