
#ifndef EX3_NUMCOMMAND_H
#define EX3_NUMCOMMAND_H

#include "Command.h"

class NumCommand : public Command{
    int val;
public:
    NumCommand(int num) {
        this->val = num;
    }
    virtual int execute() {
        return this->val;
    }
};


#endif //EX3_NUMCOMMAND_H
