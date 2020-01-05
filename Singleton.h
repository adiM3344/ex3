
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
    /**
     * get the command map
     * @return commands map
     */
    map<string, Command*>* getMap() {
        return &this->commands_map;
    }
    /**
     * set the commands map
     * @param map
     */
    void setMap(map<string, Command*> map) {
        this->commands_map = map;
    }
    /**
     * returns the symbole table
     * @return the symbole table
     */
    map<string, Variable*>* getSymbolTable() {
        return &this->symbol_table;
    }
    /**
     * returns the XML map
     * @return the XML map
     */
    map<string, Variable*>* getXMLMap() {
        return &this->xml_map;
    }
    /**
     * set the XML map
     * @param map the XML map
     */
    void setXMLMap(map<string, Variable*>* map) {
        this->xml_map = *map;
    }
    /**
     * returns the simulator messages that we send to it
     * @return simulator messages queue
     */
    queue<string>* getSimMessages() {
        return &this->simMessages;
    }
    /**
     * returns the mutex
     * @return the mutex
     */
    mutex* getMTX() {
        return &this->mtx;
    }
    /**
     * add threads to lisr
     * @param thread t
     */
    void addThread(thread* t) {
        this->threads.push_back(t);
    }
    /**
     *
     * @return true /false if the server is connected or not
     */
    bool isConnected() {
        return this->is_connected;
    }
    /**
     * set the server connected field
     * @param i true or false
     */
    void setConnected(bool i) {
        this->is_connected = i;
    }
    virtual ~Singleton();
};

#endif //EX3_SINGELTON_H