
#ifndef EX3_CONDITIONPARSER_H
#define EX3_CONDITIONPARSER_H

#include "Command.h"
#include "ex1.h"
#include <vector>
#include <string>

using namespace std;

class ConditionParser: public Command{
    vector<string> condition;
public:
    ConditionParser(const vector<string> &condition);
    virtual int execute();
    bool checkCondition();
};

#endif //EX3_CONDITIONPARSER_H