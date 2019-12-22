//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_CONDITIONPARSER_H
#define EX3_CONDITIONPARSER_H


#include "Command.h"
#include "Data.h"
#include <vector>

class ConditionParser : public Command{
protected:
public:
    ConditionParser(const Data &data, string *condition);

protected:
    Data data;
    string *condition;
public:
    virtual int execute();
    static bool checkCondition();
};



#endif //EX3_CONDITIONPARSER_H
