//
// Created by Michael Shea on 8/27/22.
//

#include "knight.h"

// Public class constructor that passes the health and ActorType of Knight to the actor constructor
knight::knight() : actor(100, ActorType::Knight) {}

// Public GetMoves() method to return a randomly selected MoveType from the KnightMoves vector
MoveType knight::GetMoves(){
    int n = 2;
    int mid = foo4random() -1;
    return KnightMoves[mid];
}