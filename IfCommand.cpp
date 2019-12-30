
#include "IfCommand.h"

int IfCommand::execute() {
    //check condition and parse if needed
    if (ConditionParser::checkCondition()) {
        Data data;
        Parser *parser = new Parser(this->command_list, data.InitMap(&this->command_list));
        parser->Parse();
    }
    if (this->unary_condition) {
        return 4 + this->command_list.size();
    }
    return 6 + this->command_list.size();
}

IfCommand::IfCommand(const vector<string> &condition, const list<string> &commandList) :
    ConditionParser(condition), command_list(commandList) {
    this->command_list=commandList;
    if (condition.size() == 1) {
        this->unary_condition = true;
    }
}
