
#include "WhileCommand.h"

int WhileCommand::execute() {
    Data data;
    Parser *parser = new Parser(this->command_list, data.InitMap(&this->command_list));
    //check condition and parse if needed
    while (ConditionParser::checkCondition()) {
        parser->Parse();
    }
    return 3 + this->lists_size;
}

WhileCommand::WhileCommand(const vector<string> &condition, const list<string> &commandList) :
        ConditionParser(condition) {
    this->command_list=commandList;
    this->lists_size = condition.size() + commandList.size();
}