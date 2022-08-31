//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_ATTACKONE_H
#define PROGRAM3_MICHAELSHEA_ATTACKONE_H
#include "../MoveTypeCreate/battlemove.h"

class attackone : public battlemove{
public:
    attackone(actor* self, actor* other);
    void Execute() override;
    void Undo() override;

private:
    int damage;
};


#endif //PROGRAM3_MICHAELSHEA_ATTACKONE_H
