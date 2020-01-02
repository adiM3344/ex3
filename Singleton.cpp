
#include "Singleton.h"

Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
    if (instance == 0)
    {
        instance = new Singleton();
    }
    return instance;
}

Singleton::Singleton(){}

Singleton::~Singleton() {
    map<string, Command*>::iterator it = this->commands_map.begin();
    for(int i = 0; i < this->commands_map.size(); i++) {
        delete it->second;
        it++;
    }
    map<string, Variable*>::iterator it2 = this->symbol_table.begin();
    for(int i = 0; i < this->symbol_table.size(); i++) {
        delete it2->second;
        it2++;
    }
}