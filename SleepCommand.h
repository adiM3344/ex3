//
// Created by ortal on 22/12/2019.
//

#ifndef EX3_SLEEPCOMMAND_H
#define EX3_SLEEPCOMMAND_H


#include "Command.h"

class SleepCommand : public Command{
public:
    virtual int execute();
};
#endif //EX3_SLEEPCOMMAND_H
