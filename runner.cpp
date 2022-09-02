//
// Created by Michael Shea on 8/27/22.
//

#include "runner.h"
runner::runner() {
    bool loopVar = true;
    std::cout << "\tWelcome to the Battle Zone!\n\n" << std::endl;
    std::cout << "Please choose the first contender...\n" << std::endl;
    ActorChoice(p1);
    std::cout << "\n\nPlease choose the second contender...\n" << std::endl;
    ActorChoice(p2);
    std::cout << "\n\nExcellent! Let the battle begin!\n" << std::endl;

    while(loopVar){
        loopVar = GameLoop();
    }


}

void runner::ActorChoice(actor* player) {
    int input;
    std::cout << "\t1. Ghost\n"
                 "\t2. Knight\n"
                 "\t3. Warrior\n" << std::endl;
    std::cout << "Enter a number here: ";
    std::cin >> input;

    player = actorfactory::CreateActor(static_cast<battlemove::ActorType>(input));
}

bool runner::GameLoop() {
    int input;
    battlemove::MoveType chosenMove;
    battlemove* move;
    std::cout << "Choose an option below..." << std::endl;
    std::cout << "\t1. P1 -> P2\n"
                 "\t2. P2 -> P1\n"
                 "\t3. Undo Last Move\n" << std::endl;
    std::cin >> input;

    switch(input){
        case 1:
           chosenMove = p1->GetMoves();
           move = battlemovefactory::BuildMove(chosenMove, p1, p2);
           game->ExecuteMove(move);

           if(p1->IsDead()){
               return false;
           } else{
               return true;
           }

        case 2:
            chosenMove = p2->GetMoves();
            move = battlemovefactory::BuildMove(chosenMove, p2, p1);
            game->ExecuteMove(move);

            if(p2->IsDead()){
                return false;
            } else{
                return true;
            }

        case 3:
            game->UndoLastMove();
            return true;
    }
}