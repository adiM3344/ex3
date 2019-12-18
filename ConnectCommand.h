//
// Created by ortal on 17/12/2019.
//

#ifndef EX3_CONNECTCOMMAND_H
#define EX3_CONNECTCOMMAND_H

#include "Command.h"


#include <string>
using namespace std;
class ConnectCommand : public Command {
    string port;
    string ip;
public:
    ConnectCommand(string p,string ipAdd) {
        this->port=p;
        this->ip=ipAdd;
    }

    virtual int execute();


};


#endif //EX3_CONNECTCOMMAND_H
