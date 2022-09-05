//
// Created by Michael Shea on 8/27/22.
//

#include "actor.h"

// Public class constructor that sets the health and type variables
actor::actor(int health, ActorType type) {
    this->health = health;
    this->type = type;
}

// Public DoMove method which takes the movemanager object, a MoveType, and the other actor object
void actor::DoMove(movemanager mgr, MoveType move, actor *other) {

    // Cast the MoveType to its int value (done first for race condition reasons)
    int moveNum = static_cast<int>(move);

    // Print out the actor object's type who is doing a move and the corresponding move
    std::cout << *this << " used: " << MoveStrings[moveNum] << "\n" << std::endl;

    // Call the ExecuteMove() method of the movemanager object which passes the BuildMove() static method from the
    // battlefactory class -> passes the MoveType, actor doing the move, and the other actor
    mgr.ExecuteMove(battlemovefactory::BuildMove(move, this, other));
}

// Public Hit() method which updates the actor's health and returns the result
int actor::Hit(int damage) {
    return this->health -= damage;
}

// Public Heal() method which updates the actor's health and returns the result
int actor::Heal(int amount) {
    return this->health += amount;
}

// Public GetHealth() method which returns the actor's health variable value
int actor::GetHealth() const {
    return this->health;
}

// Public IsDead() method which checks whether an actor's health is below or equal to zero and returns either true
// or false accordingly
bool actor::IsDead() const {
    if(this->health <= 0){
        return true;
    } else {
        return false;
    }
}

// Public class operator override which casts the ActorType of an actor to an int and passes that value to the
// ActorStrings vector for the resulting string value of the actor's type. This is sent to an ostream and returned
std::ostream &operator<<(std::ostream &output, const actor &a) {
    return output << a.ActorStrings[static_cast<int>(a.type)];
}
