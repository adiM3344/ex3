//
// Created by ortal on 22/12/2019.
//

#ifndef EX3_PARSER_H
#define EX3_PARSER_H
#include "string"
#include "Command.h"
#include "map"
using namespace std;

class Parser {
public:
    Parser(const map<string, Command*>commands, string * lex_arr);

private:
    map<string, Command *> commands_map;
    string* lexer_arr;
public:
    void Parse();
};


#endif //EX3_PARSER_H
