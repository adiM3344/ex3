
#include "SetVarCommand.h"
#include <sys/socket.h>
#include <string>
#include <cstring>


int SetVarCommand::execute() {
    Singleton* singleton = Singleton::getInstance();
    map<string, Variable*>* symbol_table = singleton->getSymbolTable();
    Variable* v = symbol_table->at(this->name);
    Interpreter i;
    string val = this->values[this->place];
    double d = i.interpret(val)->calculate();
    this->place = this->place + 1;
    v->setValue(d);
    // add to messages for client
    if (v->isRight()) {
        string message = "set " + v->getSimPath() + " " + to_string(d) + '\r' + '\n';
        singleton->getSimMessages()->push(message);
    }
    return 3;
}
