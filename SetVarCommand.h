//
// Created by adi on 12/25/19.
//

#ifndef EX3_SETVARCOMMAND_H
#define EX3_SETVARCOMMAND_H

#include "Command.h"
#include "Singleton.h"

using namespace std;


class SetVarCommand : public Command {
    string name;
    string value;
public:
    SetVarCommand(string n, string v){
        this->name = n;
        this->value = v;
    }
    int execute() override;
};


#endif //EX3_SETVARCOMMAND_H
