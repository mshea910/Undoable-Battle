//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ACTORFACTORY_H
#define PROGRAM3_MICHAELSHEA_ACTORFACTORY_H
#include "../ActorTypes/ghost.h"
#include "../ActorTypes/knight.h"
#include "../ActorTypes/warrior.h"

class actorfactory {
public:
    actorfactory()=default;
    static actor* CreateActor(ActorType actor);
};


#endif //PROGRAM3_MICHAELSHEA_ACTORFACTORY_H
