//
// Created by adi on 12/17/19.
//
#include "Command.h"
#ifndef EX3_DEFINEVARCOMMAND_H
#define EX3_DEFINEVARCOMMAND_H

#include <string>
using namespace std;

class DefineVarCommand : public Command {
string name;
string direction;
string value;
public:
    DefineVarCommand(string n, string d, string v) {
        this->name = n;
        this->direction = d;
        this->value = v;
    }
    virtual int execute();
};


#endif //EX3_DEFINEVARCOMMAND_H
