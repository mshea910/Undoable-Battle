//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ATTACKTWO_H
#define PROGRAM3_MICHAELSHEA_ATTACKTWO_H
#include "../MoveTypeCreate/battlemove.h"

class attacktwo : public battlemove {
public:
    // Public class constructor
    attacktwo(actor* self, actor* other);

    // virtual method overrides
    void Execute() override;
    void Undo() override;

private:
    // Variable to store heal amount (damage)
    int damage;
};


#endif //PROGRAM3_MICHAELSHEA_ATTACKTWO_H
