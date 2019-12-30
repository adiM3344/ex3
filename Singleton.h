
#ifndef EX3_SINGELTON_H
#define EX3_SINGELTON_H

#include <iostream>
#include "Command.h"
#include "ex1.h"
#include <list>
#include <map>
#include <vector>
#include "Variable.h"
#include <thread>
#include <mutex>
using namespace std;

class Singleton {
    static Singleton *instance;
    map<string,Command*> commands_map;
    list<string> lexer_arr;
    map<string, Variable*> symbol_table;
    map<string,Variable*> xml_map;
    vector<thread*> threads;
    int client_socket{};
    mutex mtx;
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
    vector<thread*>* getThreads(){
        return &this->threads;
    }
    int getClientSocket() {
        return this->client_socket;
    }
    void setXMLMap(map<string, Variable*>* map) {
        this->xml_map = *map;
    }
    list<string>* getLexerArray() {
        return &this->lexer_arr;
    }
    mutex* getMTX() {
        return &this->mtx;
    }
    void setMap(map<string, Command*> map) {
        this->commands_map = map;
    }
    void setLexerArray(list<string>* list) {
        this->lexer_arr = *list;
    }
    void addThread(thread* t) {
        this->threads.push_back(t);
    }
    void setClientSocket(int i) {
        this->client_socket = i;
    }
};
#endif //EX3_SINGELTON_H
