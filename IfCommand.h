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

class IfCommand : public Command{
    vector<string> condition;
    list<string> command_list;
public:

    virtual int execute();

};


#endif //EX3_IFCOMMAND_H
