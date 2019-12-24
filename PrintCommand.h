//
// Created by ortal on 22/12/2019.
//

#ifndef EX3_PRINTCOMMAND_H
#define EX3_PRINTCOMMAND_H


#include "Command.h"
#include <iostream>
using namespace std;


class PrintCommand : public Command{
    string value;
public:
    PrintCommand(string s) {
        this->value = s;
    }
    virtual int execute();
};


#endif //EX3_PRINTCOMMAND_H
