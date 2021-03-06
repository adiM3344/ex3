
#ifndef EX3_WHILECOMMAND_H
#define EX3_WHILECOMMAND_H

#include "ConditionParser.h"
#include "Data.h"
#include "Parser.h"
#include <list>
#include <vector>
#include <string>

using namespace std;

class WhileCommand : public ConditionParser {
    list<string> command_list;
    int lists_size;
public:
    WhileCommand(const vector<string> &conditions, const list<string> &commandList);
    virtual int execute();
};

#endif //EX3_WHILECOMMAND_H