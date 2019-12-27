
#include "WhileCommand.h"

int WhileCommand::execute() {
    //check condition and parse if needed
    while (ConditionParser::checkCondition()) {
        Data data;
        Parser *parser = new Parser(this->command_list, data.InitMap(&this->command_list));
        parser->Parse();
    }
    cout<<"~ starting while command ~"<<endl;
    return 6 + this->command_list.size();
}

WhileCommand::WhileCommand(const vector<string> &condition, const list<string> &commandList) :
    ConditionParser(condition), command_list(commandList) {
    this->command_list=commandList;
}





