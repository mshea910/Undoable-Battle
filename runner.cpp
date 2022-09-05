//
// Created by Michael Shea on 8/27/22.
//

#include "runner.h"


runner::runner() {
    bool loopVar = true;

    std::cout << "\tWelcome to the Battle Zone!\n\n" << std::endl;
    while(loopVar){
        std::cout << "Please choose the first contender...\n" << std::endl;
        loopVar = ActorChoice(p1);
    }

    loopVar = true;
    while(loopVar){
        std::cout << "\n\nPlease choose the second contender...\n" << std::endl;
        loopVar = ActorChoice(p2);
    }

    std::cout << "\n\nExcellent! Let the battle begin!\n" << std::endl;

    loopVar = true;
    while(loopVar){
        loopVar = GameLoop();
    }

}

bool runner::ActorChoice(actor* player) {
    int input;
    std::cout << "\t1. Ghost\n"
                 "\t2. Knight\n"
                 "\t3. Warrior\n" << std::endl;
    std::cout << "Enter a number here: ";
    std::cin >> input;

    if(player == p1){
        p1 = actorfactory::CreateActor(static_cast<ActorType>(input - 1));
        return false;
    }  else if(player == p2) {
        p2 = actorfactory::CreateActor(static_cast<ActorType>(input - 1));
        return false;
    } else {
        std::cout << "\n\nSomething went wrong, Please try again! Actor sent: " << player
        << " | Error: 101\n" << std::endl;
        return true;
    }
}

bool runner::GameLoop() {
    int input;
    MoveType chosenMove;

    std::cout << "P1: " << *p1 << std::endl;
    std::cout << "P2: " << *p2 << "\n" << std::endl;
    std::cout << "Choose an option below..." << std::endl;
    std::cout << "\t1. P1 -> P2\n"
                 "\t2. P2 -> P1\n"
                 "\t3. Undo Last Move\n" << std::endl;
    std::cin >> input;

    switch(input){
        case 1:
           chosenMove = actor::GetMoves();
           p1->DoMove(*game, chosenMove, p2);

           if(p1->IsDead()){
               return false;
           } else{
               return true;
           }

        case 2:
            chosenMove = actor::GetMoves();
            p2->DoMove(*game, chosenMove, p1);

            if(p2->IsDead()){
                return false;
            } else{
                return true;
            }

        case 3:
            game->UndoLastMove();
            return true;

        default:
            std::cout << "\n\n I'm sorry, that was an invalid selection. Please try again!\n" << std::endl;
            return true;
    }
}