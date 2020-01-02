
#ifndef EX3_PARSER_H
#define EX3_PARSER_H

#include "Command.h"
#include "Singleton.h"
#include <list>
#include <map>
#include <string>

using namespace std;

class Parser {
    list<string> command_list;
    map<string, Command*> command_map;
public:
    Parser(const list<string> &commandList, const map<string, Command*> &commandMap);
    void Parse();
};

#endif //EX3_PARSER_H