//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_HEAL_H
#define PROGRAM3_MICHAELSHEA_HEAL_H
#include "../MoveTypeCreate/battlemove.h"

class heal : public battlemove {
public:
    // Public class constructor
    heal(actor* self, actor* other);

    // virtual method overrides
    void Execute() override;
    void Undo() override;

private:
    // Variable to store damage dealt
    int damage;
};


#endif //PROGRAM3_MICHAELSHEA_HEAL_H
