
#ifndef EX3_IFCOMMAND_H
#define EX3_IFCOMMAND_H

#include "ConditionParser.h"
#include "Data.h"
#include "Parser.h"
#include <string>
#include <list>
#include <vector>

using namespace std;

class IfCommand : public ConditionParser{
    list<string> command_list;
    int lists_size;
public:
    IfCommand(const vector<string> &conditions, const list<string> &commandList);
    virtual int execute();
};

#endif //EX3_IFCOMMAND_H