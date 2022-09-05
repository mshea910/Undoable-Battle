//
// Created by Michael Shea on 8/27/22.
//

#include "knight.h"

knight::knight() : actor(100, ActorType::Knight) {}

MoveType knight::GetMoves(){
    int n = 2;
    int mid = foo4random() -1;
    return KnightMoves[mid];
}