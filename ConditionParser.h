//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_CONDITIONPARSER_H
#define EX3_CONDITIONPARSER_H


#include "Command.h"
#include "Data.h"
#include <vector>

class ConditionParser : public Command{
    Data data;
    string *condition;
public:
    ConditionParser(const Data &data, string *condition);
    virtual int execute();
    bool checkCondition();
};



#endif //EX3_CONDITIONPARSER_H
