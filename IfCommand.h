
#ifndef EX3_IFCOMMAND_H
#define EX3_IFCOMMAND_H

#include "ConditionParser.h"
#include "Data.h"
#include "Parser.h"

using namespace std;

class IfCommand : public ConditionParser{
    list<string> command_list;
    int lists_size;
public:
    IfCommand(const vector<string> &condition, const list<string> &commandList);
    virtual int execute();

};

#endif //EX3_IFCOMMAND_H