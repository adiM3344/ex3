//
// Created by ortal on 20/12/2019.
//

#include "IfCommand.h"
#include "ConditionParser.h"
#include <string>
#include <vector>

using namespace std;
int IfCommand::execute() {
    //check condition and parse if needed
    if (ConditionParser::checkCondition()) {
        for(){

        }
    }
    return this->command_list.size()+2;
}

IfCommand::IfCommand(const vector<string> &commandList) : command_list(commandList) {
    this->command_list=commandList;
}

