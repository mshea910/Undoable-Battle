//
// Created by Michael Shea on 8/27/22.
//

#include "warrior.h"

warrior::warrior() : actor(100, ActorType::Warrior) {}

MoveType warrior::GetMoves(){
    int n = 2;
    int mid = foo4random() -1;
    return WarriorMoves[mid];
}