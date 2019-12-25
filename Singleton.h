#ifndef EX3_SINGELTON_H
#define EX3_SINGELTON_H

#include <iostream>
#include "Command.h"
#include "ex1.h"
#include <map>

using namespace std;

class Singleton {
    static Singleton *instance;
    map<string,Command*> commands_map;
    string* lexer_arr;
    map<string, Variable> symbol_table;
    Singleton();

public:
    static Singleton* getInstance();

    map<string, Command*>* getMap() {
        return &this->commands_map;
    }
    map<string, Variable>* getSymbolTable() {
        return &this->symbol_table;
    }
    string** getLexerArray() {
        return &this->lexer_arr;
    }
    void setMap(map<string, Command*> map) {
        this->commands_map = map;
    }
    void setSymbolTable(map<string, Variable> map) {
        this->symbol_table = map;
    }
    void setLexerArray(string* arr) {
        this->lexer_arr = arr;
    }
};
#endif //EX3_SINGELTON_H
