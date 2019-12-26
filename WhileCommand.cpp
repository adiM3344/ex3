//
// Created by ortal on 20/12/2019.
//

#include "WhileCommand.h"
#include "ConditionParser.h"
#include <string>
#include <vector>
#include "Singleton.h"


using namespace std;
int WhileCommand::execute() {
    Singleton* singleton = Singleton::getInstance();
    map<string,Command*>* commands =singleton->getMap();
    //check condition and parse if needed
    while (ConditionParser::checkCondition()) {
        for(int i=0;i< this->command_list.size(); i++) {

        }
    }
    return this->command_list.size()+2;
}

WhileCommand::WhileCommand(const vector<string> &commandList) : command_list(commandList) {
    this->command_list=commandList;
}
