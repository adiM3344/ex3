//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_CONDITIONPARSER_H
#define EX3_CONDITIONPARSER_H


#include "Command.h"
#include "Data.h"
#include <vector>

class ConditionParser : public Command{
    vector<string> condition;
public:
    ConditionParser(vector<string> cond) {
        this->condition = cond;
    }
    virtual int execute();
    static bool checkCondition();
};



#endif //EX3_CONDITIONPARSER_H
