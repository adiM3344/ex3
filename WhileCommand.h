//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_WHILECOMMAND_H
#define EX3_WHILECOMMAND_H
using namespace std;
#include "ConditionParser.h"
#include <string>
#include <vector>
#include <list>


#include "Command.h"

class WhileCommand : public ConditionParser {
    vector<string> condition;
    list<string> command_list;
public:

    WhileCommand(const vector<string> &condition, const vector<string> &condition1, const list<string> &commandList);

    virtual int execute();

};


#endif //EX3_WHILECOMMAND_H
