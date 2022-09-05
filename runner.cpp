//
// Created by Michael Shea on 8/27/22.
//

#include "runner.h"


// Public class constructor which runs the game in a loop
runner::runner() {

    // Set initial state variable and declare input
    char input;
    bool loopVar = true;

    // Initial welcome message
    std::cout << "\n\n\t\tWelcome to the Battle Zone!\n\n" << std::endl;

    // Primary game loop
    while(true) {

        // Select player one and handle errors
        while(loopVar){

            // Request selection from user and call ActorChoice() method passing p1 actor object
            std::cout << "Please choose the first contender...\n" << std::endl;

            // bool result stored to determine if p1 was correctly set or needs to be done again
            loopVar = ActorChoice(p1);
        }

        // Select player two and handle errors
        loopVar = true;
        while(loopVar){

            // Request selection from user and call ActorChoice() method passing p2 actor object
            std::cout << "\n\nPlease choose the second contender...\n" << std::endl;

            // bool result stored to determine if p1 was correctly set or needs to be done again
            loopVar = ActorChoice(p2);
        }

        std::cout << "\n\nExcellent! Let the battle begin!\n" << std::endl;

        // Once actors are set, run through battle loop
        loopVar = true;
        while(loopVar){

            // Call GameLoop() method and set bool result to determine if battle has finished
            loopVar = GameLoop();
        }

        // Once battle loop is broken, determine if user wants to play again, set input variable
        std::cout << "\n\nDo you wish to play again? (Y/N)" << std::endl;
        std::cin >> input;

        // If no, thank player and break; else play again
        if(input == 'N' || input == 'n') {
            std::cout << "\n\t\tThanks for playing!" << std::endl;
            break;
        }else if(input == 'Y' || input == 'y'){
            std::cout << "\n\t\tAwesome! Let's go again! Setting up game. . ." << std::endl;
        } else {
            std::cout << "\n\t\tI'm sorry, that is not a valid option. Defaulting to play again. . ." << std::endl;
        }
    }
}

// Public ActorChoice() method which runs through the actor selection process for each player. Return bool value
bool runner::ActorChoice(actor* player) {
    int input;

    // Prompt user with selection options
    std::cout << "\t1. Ghost\n"
                 "\t2. Knight\n"
                 "\t3. Warrior\n" << std::endl;
    std::cout << "Enter a number here: ";

    // Set input variable
    std::cin >> input;

    // Determine whether P1 or P2 is being passed and call the CreateActor method from the actorfactory class.
    if(player == p1){

        // Cast the input - 1 as a corresponding ActorType
        p1 = actorfactory::CreateActor(static_cast<ActorType>(input - 1));
        return false;
    }  else if(player == p2) {

        // Cast the input - 1 as a corresponding ActorType
        p2 = actorfactory::CreateActor(static_cast<ActorType>(input - 1));
        return false;
    } else {
        std::cout << "\n\nSomething went wrong, Please try again! Actor sent: " << player
        << " | Error: 101\n" << std::endl;
        return true;
    }
}

// Public GameLoop() method to run through the battle portion of the game. Return bool value
bool runner::GameLoop() {
    int input;
    MoveType chosenMove;

    // Print current selections and actor health using the GetHealth() method
    std::cout << "P1: " << *p1 << " | " << p1->GetHealth() << " HP" << std::endl;
    std::cout << "P2: " << *p2 << " | " << p2->GetHealth() << " HP" << "\n" << std::endl;

    // Prompt user for selection options
    std::cout << "Choose an option below..." << std::endl;
    std::cout << "\t1. P1 -> P2\n"
                 "\t2. P2 -> P1\n"
                 "\t3. Undo Last Move\n" << std::endl;

    // Take in user input
    std::cin >> input;


    // Switch based on user input to perform the corresponding methods
    switch(input){
        case 1:

            // Call the GetMoves() method of the p1 actor and store the returned MoveType
           chosenMove = p1->GetMoves();

           // Call the DoMove() method of the p1 actor passing the movemanager object, MoveType, and p2 actor
           p1->DoMove(*game, chosenMove, p2);

           // Check if p2 is dead using the IsDead() method and handle accordingly
           if(p2->IsDead()){
               std::cout << "\n\n\t\t" << *p1 << " is victorious!!!\n" << std::endl;
               return false;
           } else{
               return true;
           }

        case 2:

            // Call the GetMoves() method of the p2 actor and store the returned MoveType
            chosenMove = p2->GetMoves();

            // Call the DoMove() method of the p2 actor passing the movemanager object, MoveType, and p1 actor
            p2->DoMove(*game, chosenMove, p1);

            // Check if p1 is dead using the IsDead() method and handle accordingly
            if(p1->IsDead()){
                std::cout << "\n\n\t\t" << *p2 << " is victorious!!!\n" << std::endl;
                return false;
            } else{
                return true;
            }

        case 3:

            // Undo the last move by using the UndoLastMove() method of the movemanager object
            game->UndoLastMove();
            return true;

        default:

            // Handle all other erroneous input
            std::cout << "\n\n I'm sorry, that was an invalid selection. Please try again!\n" << std::endl;
            return true;
    }
}