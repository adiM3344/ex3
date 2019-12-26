//
// Created by ortal on 20/12/2019.
//

#include "IfCommand.h"
#include "ConditionParser.h"
#include "Parser.h"
#include <string>
#include <vector>

using namespace std;
int IfCommand::execute() {
    //check condition and parse if needed
    if (ConditionParser::checkCondition()) {
        Parser *parser=new Parser(this->command_list);
        parser->Parse();
    }
}

IfCommand::IfCommand(const vector<string> &condition, const list<string> &commandList) : ConditionParser(condition),
                                                                                         command_list(commandList) {
    this->command_list=commandList;
}
