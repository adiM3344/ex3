//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_IFCOMMAND_H
#define EX3_IFCOMMAND_H
#include <string>
#include <list>

using namespace std;


#include "ConditionParser.h"
#include <vector>
#include <string>

class IfCommand : public ConditionParser{
    list<string> command_list;
public:

    IfCommand(const vector<string> &condition, const list<string> &commandList);

    virtual int execute();

};


#endif //EX3_IFCOMMAND_H
