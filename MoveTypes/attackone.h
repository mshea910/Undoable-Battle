//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ATTACKONE_H
#define PROGRAM3_MICHAELSHEA_ATTACKONE_H
#include "../MoveTypeCreate/battlemove.h"

class attackone : public battlemove{
public:
    // Public class constructor
    attackone(actor* self, actor* other);

    // virtual method overrides
    void Execute() override;
    void Undo() override;

private:
    // Variable to store damage dealt
    int damage;
};


#endif //PROGRAM3_MICHAELSHEA_ATTACKONE_H
