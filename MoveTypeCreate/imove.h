//
// Created by Michael Shea on 8/27/22.
//

#ifndef PROGRAM3_MICHAELSHEA_IMOVE_H
#define PROGRAM3_MICHAELSHEA_IMOVE_H
#include "../GameManagement/Enums.h"

class imove {
public:
    // virtual destructor set to default if not implemented
    virtual ~imove()=default;

    // virtual Execute and Undo methods
    virtual void Execute()=0;
    virtual void Undo()=0;
};


#endif //PROGRAM3_MICHAELSHEA_IMOVE_H
