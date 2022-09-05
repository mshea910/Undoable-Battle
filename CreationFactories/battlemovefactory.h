//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_BATTLEMOVEFACTORY_H
#define PROGRAM3_MICHAELSHEA_BATTLEMOVEFACTORY_H
#include "../MoveTypeCreate/battlemove.h"
#include "../MoveTypes/attackone.h"
#include "../MoveTypes/attacktwo.h"
#include "../MoveTypes/heal.h"

class battlemovefactory {
public:
    // Public class constructor
    battlemovefactory()=default;

    // Public static method to build move
    static battlemove* BuildMove( MoveType type, actor* self, actor* other);

};


#endif //PROGRAM3_MICHAELSHEA_BATTLEMOVEFACTORY_H
