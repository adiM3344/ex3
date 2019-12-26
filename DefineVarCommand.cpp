//
// Created by adi on 12/17/19.
//

#include "DefineVarCommand.h"

using namespace std;
int DefineVarCommand::execute() {
    Singleton* singleton = Singleton::getInstance();
    map<string, Variable>* var_map = singleton->getSymbolTable();
    if (sim != "") {
        Variable var(this->name, this->sim, this->is_right);
        var_map->insert({this->name, var});
    }
    else {
        Variable v = var_map->at(this->value);
        double val = v.calculate();
        Variable var(this->name, val);
        var_map->insert({this->name, var});
    }
}


