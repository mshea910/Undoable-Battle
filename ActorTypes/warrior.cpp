//
// Created by Michael Shea on 8/27/22.
//

#include "warrior.h"

// Public class constructor that passes the health and ActorType of Warrior to the actor constructor
warrior::warrior() : actor(100, ActorType::Warrior) {}

// Public GetMoves() method to return a randomly selected MoveType from the WarriorMoves vector
MoveType warrior::GetMoves(){
    int n = 2;
    int mid = foo4random() -1;
    return WarriorMoves[mid];
}