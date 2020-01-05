
#include "IfCommand.h"

/**
 * if the condition is correct it parse the commands in it
 * @return the number of indexes to move in the commands map
 */
int IfCommand::execute() {
    //check condition and parse if needed
    if (ConditionParser::checkCondition()) {
        Data data;
        Parser *parser = new Parser(this->command_list, data.InitMap(&this->command_list));
        parser->Parse();
    }
    return 3 + this->lists_size;
}

/**
 * constructor
 * @param condition to check
 * @param commandList list of commands
 */
IfCommand::IfCommand(const vector<string> &conditions, const list<string> &commandList) :
        ConditionParser(conditions) {
    this->command_list=commandList;
    this->lists_size = conditions.size() + commandList.size();
}