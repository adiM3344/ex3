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
    if (ConditionParser* p=new ConditionParser(this->condition)) {
        Parser *parser=new Parser(this->command_list);
        parser->Parse();
    }
}
