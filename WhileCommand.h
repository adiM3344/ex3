
#ifndef EX3_WHILECOMMAND_H
#define EX3_WHILECOMMAND_H

#include "ConditionParser.h"
#include "Data.h"
#include <string>
#include <vector>
#include <list>
#include "Parser.h"

using namespace std;



class WhileCommand : public ConditionParser {
    list<string> command_list;
    bool unary_condition = false;
public:
    WhileCommand(const vector<string> &condition, const list<string> &commandList);
    virtual int execute();
};


#endif //EX3_WHILECOMMAND_H
