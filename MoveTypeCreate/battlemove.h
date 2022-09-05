//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
#define PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
#include "imove.h"

// Defining random number macro to use in attack classes and actor classes
#define foo4random() (arc4random() % ((unsigned)n + 1))

// Forward class declaration for mutually dependent class methods
class actor;

class battlemove : public imove{
public:
    // Public class constructor
    battlemove(actor*, actor*);

    // actor object pointers
    actor* self;
    actor* other;
};


#endif //PROGRAM3_MICHAELSHEA_BATTLEMOVE_H
