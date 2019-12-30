//
// Created by adi on 12/17/19.
//
#include "DefineVarCommand.h"

using namespace std;

int DefineVarCommand::execute() {
    Singleton* singleton = Singleton::getInstance();
    vector<string> vars_fields = this->vars[this->place];
    this->place = this->place+1;
    // if "sim" is not defined
    if (vars_fields[1] != "") {
        //singleton->getMTX()->lock();
        Variable* var = singleton->getXMLMap()->at(vars_fields[1]);
        //singleton->getMTX()->unlock();
        if (vars_fields[3] == "->") {
            var->setDirection(true);
        }
        singleton->getSymbolTable()->insert({vars_fields[0], var});
        return 5;
    }
    else {
        Interpreter i;
        double val = i.interpret(vars_fields[2])->calculate();
        Variable var(vars_fields[0], val);
        singleton->getSymbolTable()->insert({vars_fields[0], &var});
        return 4;
    }
}


