//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_IFCOMMAND_H
#define EX3_IFCOMMAND_H
#include <string>
#include <list>

using namespace std;


#include "Command.h"
#include "ConditionParser.h"
#include <vector>
#include <string>

class IfCommand : public  Command{
    vector<string> command_list;
public:
    IfCommand(const vector<string> &commandList);

    virtual int execute();

};


#endif //EX3_IFCOMMAND_H
