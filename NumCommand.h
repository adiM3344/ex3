
#ifndef EX3_NUMCOMMAND_H
#define EX3_NUMCOMMAND_H

#include "Command.h"

class NumCommand : public Command{
    int number_of_commands;
public:
    NumCommand(int val) {
        this->number_of_commands = val;
    }
    virtual int execute();
};

#endif //EX3_NUMCOMMAND_H