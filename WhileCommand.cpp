//
// Created by ortal on 20/12/2019.
//

#include "WhileCommand.h"
#include "ConditionParser.h"

using namespace std;
int WhileCommand::execute() {

    //check condition and parse if needed
    while (ConditionParser::checkCondition()) {

    }

}