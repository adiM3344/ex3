#ifndef EX3_SLEEPCOMMAND_H
#define EX3_SLEEPCOMMAND_H


#include "Command.h"
#include <iostream>
using namespace std;

class SleepCommand : public Command{
    int value;
public:
    SleepCommand(string s) {
        this->value = stoi(s);
    }
    virtual int execute();
};
#endif //EX3_SLEEPCOMMAND_H
