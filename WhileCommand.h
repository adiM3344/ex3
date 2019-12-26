//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_WHILECOMMAND_H
#define EX3_WHILECOMMAND_H
using namespace std;
#include <string>
#include <vector>


#include "Command.h"

class WhileCommand : public Command {
    vector<string> command_list;
public:
    WhileCommand(const vector<string> &commandList);

    virtual int execute();

};


#endif //EX3_WHILECOMMAND_H
