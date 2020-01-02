
#include "IfCommand.h"

int IfCommand::execute() {
    //check condition and parse if needed
    if (ConditionParser::checkCondition()) {
        Data data;
        Parser *parser = new Parser(this->command_list, data.InitMap(&this->command_list));
        parser->Parse();
    }
    return 3 + this->lists_size;
}

IfCommand::IfCommand(const vector<string> &condition, const list<string> &commandList) :
        ConditionParser(condition) {
    this->command_list=commandList;
    this->lists_size = condition.size() + commandList.size();
}