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
string sim;
public:
    DefineVarCommand(string n, string d, string s) {
        this->name = n;
        this->direction = d;
        this->sim = s;
    }
    virtual int execute();
};


#endif //EX3_DEFINEVARCOMMAND_H
