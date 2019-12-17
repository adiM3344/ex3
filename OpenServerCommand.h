//
// Created by ortal on 17/12/2019.
//
#include "Command.h"
#ifndef EX3_OPENSERVERCOMMAND_H
#define EX3_OPENSERVERCOMMAND_H

#include <string>
using namespace std;

class OpenServerCommand: public Command {
    string port;
public:
    OpenServerCommand(string p) {
        this->port=p;
    }

    virtual int execute();


};


#endif //EX3_OPENSERVERCOMMAND_H
