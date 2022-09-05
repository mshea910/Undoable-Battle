//
// Created by Michael Shea on 8/27/22.
//

#include "ghost.h"

ghost::ghost() : actor(100, ActorType::Ghost) {}

MoveType ghost::GetMoves(){
    int n = 2;
    int mid = foo4random() -1;
    return GhostMoves[mid];
}
