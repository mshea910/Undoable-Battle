//
// Created by Michael Shea on 8/27/22.
//

#include "ghost.h"

// Public class constructor that passes the health and ActorType of Ghost to the actor constructor
ghost::ghost() : actor(100, ActorType::Ghost) {}

// Public GetMoves() method to return a randomly selected MoveType from the GhostMoves vector
MoveType ghost::GetMoves(){
    int n = 2;
    int mid = foo4random() -1;
    return GhostMoves[mid];
}
