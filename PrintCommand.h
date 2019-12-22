//
// Created by ortal on 22/12/2019.
//

#ifndef EX3_PRINTCOMMAND_H
#define EX3_PRINTCOMMAND_H


#include "Command.h"

class PrintCommand : public Command{
public:
    virtual int execute();
};


#endif //EX3_PRINTCOMMAND_H
