
#include "Singleton.h"

Singleton* Singleton::instance = 0;

/**
 * get the member of the class and returns it
 * @return the member of the class
 */
Singleton* Singleton::getInstance()
{
    if (instance == 0)
    {
        instance = new Singleton();
    }
    return instance;
}

Singleton::Singleton(){}

/**
 * destructor to all maps and commands
 */
Singleton::~Singleton() {
    map<string, Command*>::iterator it = this->commands_map.begin();
    int commands_size = this->commands_map.size();
    for(int i = 0; i < commands_size; i++) {
        delete it->second;
        it++;
    }
    map<string, Variable*>::iterator it2 = this->symbol_table.begin();
    int variables_size = this->symbol_table.size();
    for(int i = 0; i < variables_size; i++) {
        delete it2->second;
        it2++;
    }
}