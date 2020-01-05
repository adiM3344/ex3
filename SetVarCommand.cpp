
#include "SetVarCommand.h"
/**
 * get the variable that needs to set its value and interpret the string ,
 * finally set the string to the var
 * @return the number of indexes to move in the commands map
 */
int SetVarCommand::execute() {
    // get the variable that needs to set its value
    Singleton* singleton = Singleton::getInstance();
    map<string, Variable*>* symbol_table = singleton->getSymbolTable();
    Variable* v = symbol_table->at(this->name);
    // get the string of the value that needs to be assigned
    string val = this->values[this->place];
    this->place = this->place + 1;
    // interpret the string
    Interpreter i;
    double d = i.interpret(val)->calculate();
    v->setValue(d);
    // add to messages for client
    if (v->isRight()) {
        string message = "set " + v->getSimPath() + " " + to_string(d) + '\r' + '\n';
        singleton->getSimMessages()->push(message);
    }
    return 3;
}