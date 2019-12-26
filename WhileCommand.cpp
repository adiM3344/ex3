//
// Created by ortal on 20/12/2019.
//

#include "WhileCommand.h"
#include "ConditionParser.h"
#include <string>
#include <vector>
#include "Parser.h"


using namespace std;
int WhileCommand::execute() {
    while (ConditionParser::checkCondition()) {
        Parser *parser=new Parser(this->command_list);
        parser->Parse();
    }
}

WhileCommand::WhileCommand(const vector<string> &condition, const list<string> &commandList) : ConditionParser(
        condition), command_list(commandList) {
    this->command_list=commandList;

}





