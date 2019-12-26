//
// Created by adi on 12/17/19.
//
#include "Command.h"
#ifndef EX3_DEFINEVARCOMMAND_H
#define EX3_DEFINEVARCOMMAND_H

#include <string>
#include "ex1.h"
#include "Singleton.h"
using namespace std;

class DefineVarCommand : public Command {
string name;
string sim = "";
string value;
bool is_right = false;
public:
    DefineVarCommand(string n, string d, string s) {
        this->name = n;
        this->sim = s;
        if (d == "->") {
            this->is_right = true;
        }
    }
    DefineVarCommand(string n, string v) {
        this->name = n;
        this->value = v;
    }
    virtual int execute();
};


#endif //EX3_DEFINEVARCOMMAND_H
