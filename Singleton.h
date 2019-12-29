
#ifndef EX3_SINGELTON_H
#define EX3_SINGELTON_H

#include <iostream>
#include "Command.h"
#include "ex1.h"
#include <list>
#include <map>
#include "Variable.h"

using namespace std;

class Singleton {
    static Singleton *instance;
    map<string,Command*> commands_map;
    list<string> lexer_arr;
    map<string, Variable*> symbol_table;
    map<string,Variable*> xml_map;
    Singleton();

public:
    static Singleton* getInstance();

    map<string, Command*>* getMap() {
        return &this->commands_map;
    }
    map<string, Variable*>* getSymbolTable() {
        return &this->symbol_table;
    }
    map<string, Variable*>* getXMLMap() {
        return &this->xml_map;
    }
    list<string>* getLexerArray() {
        return &this->lexer_arr;
    }
    void setMap(map<string, Command*> map) {
        this->commands_map = map;
    }
    void setLexerArray(list<string>* list) {
        this->lexer_arr = *list;
    }
};
#endif //EX3_SINGELTON_H
