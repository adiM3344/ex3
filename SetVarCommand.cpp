
#include "SetVarCommand.h"

int SetVarCommand::execute() {
    Singleton* singleton = Singleton::getInstance();
    map<string, Variable>* symbol_table = singleton->getSymbolTable();
    Variable* v = &symbol_table->at(this->name);
    Interpreter i;
    Expression* e = i.interpret(this->value);
    v->setValue(e->calculate());
    return 3;
}
