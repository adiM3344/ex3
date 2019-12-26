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
    while (ConditionParser* p=new ConditionParser(this->condition)) {
        Parser *parser=new Parser(this->command_list);
        parser->Parse();
    }
}

WhileCommand::WhileCommand(const vector<string> &condition, const vector<string> &condition1,
                           const list<string> &commandList) : ConditionParser(condition), condition(condition1),
                                                              command_list(commandList) {}




