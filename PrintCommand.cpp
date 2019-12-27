//
// Created by ortal on 22/12/2019.
//

#include "PrintCommand.h"

int PrintCommand::execute() {
    Singleton* s = Singleton::getInstance();
    map<string, Variable>* symbol_table = s->getSymbolTable();
    if (symbol_table->count(this->value) > 0) {
        Variable v = symbol_table->find(this->value)->second;
        cout << v.calculate() << endl;
    }
    else {
        cout << this->value << endl;
    }
    return 2;
}