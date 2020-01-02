
#ifndef EX3_SINGELTON_H
#define EX3_SINGELTON_H

#include "Command.h"
#include "Variable.h"
#include <thread>
#include <mutex>
#include <list>
#include <map>
#include <queue>
#include <vector>
#include <string>

using namespace std;

class Singleton {
    static Singleton *instance;
    map<string,Command*> commands_map;
    map<string, Variable*> symbol_table;
    map<string,Variable*> xml_map;
    queue<string> simMessages;
    mutex mtx;
    vector<thread*> threads;
    bool is_connected = false;
    Singleton();
public:
    static Singleton* getInstance();
    map<string, Command*>* getMap() {
        return &this->commands_map;
    }
    void setMap(map<string, Command*> map) {
        this->commands_map = map;
    }
    map<string, Variable*>* getSymbolTable() {
        return &this->symbol_table;
    }
    map<string, Variable*>* getXMLMap() {
        return &this->xml_map;
    }
    void setXMLMap(map<string, Variable*>* map) {
        this->xml_map = *map;
    }
    queue<string>* getSimMessages() {
        return &this->simMessages;
    }
    mutex* getMTX() {
        return &this->mtx;
    }
    void addThread(thread* t) {
        this->threads.push_back(t);
    }
    bool isConnected() {
        return this->is_connected;
    }
    void setConnected(bool i) {
        this->is_connected = i;
    }
    virtual ~Singleton();
};

#endif //EX3_SINGELTON_H