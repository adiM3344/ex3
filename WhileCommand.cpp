
#include "WhileCommand.h"
/**
 * while the condition is correct we parse the commands in it
 * @return the number of indexes to move in the commands map
 */
int WhileCommand::execute() {
    //check condition and parse if needed
    while (ConditionParser::checkCondition()) {
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
WhileCommand::WhileCommand(const vector<string> &condition, const list<string> &commandList) :
        ConditionParser(condition) {
    this->command_list=commandList;
    this->lists_size = condition.size() + commandList.size();
}