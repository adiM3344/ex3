//
// Created by ortal on 22/12/2019.
//

#ifndef EX3_PARSER_H
#define EX3_PARSER_H
#include "string"
#include "Command.h"
#include <map>
#include <list>
#include "Singleton.h"

using namespace std;

class Parser {
    list<string> command_list;
public:
    Parser(const list<string> &commandList);

    void Parse();
};


#endif //EX3_PARSER_H
