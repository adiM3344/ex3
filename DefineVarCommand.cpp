
#include "DefineVarCommand.h"

/**
 * defines a variable according to the data provided and adds it to the symbol table
 * @return the number of indexes to move in the commands map
 */
int DefineVarCommand::execute() {
    Singleton* singleton = Singleton::getInstance();
    // gets the data the belongs to this variable
    vector<string> vars_fields = this->vars[this->place];
    this->place = this->place+1;
    // if "sim" is defined
    if (vars_fields[1] != "") {
        Variable* var = singleton->getXMLMap()->at(vars_fields[1]);
        if (vars_fields[3] == "->") {
            var->setDirection(true);
        }
        singleton->getSymbolTable()->insert({vars_fields[0], var});
        return 5;
    }
    else {
        Interpreter i;
        double val = i.interpret(vars_fields[2])->calculate();
        Variable *var = new Variable(vars_fields[0], val);
        singleton->getSymbolTable()->insert({vars_fields[0], var});
        return 4;
    }
}

/**
 * adds the data of a new variable
 * @param n the name
 * @param s the sim path
 * @param v the value
 * @param d the direction
 */
void DefineVarCommand::addVar(string n, string s, string v, string d) {
    vector<string> fields;
    fields.push_back(n);
    fields.push_back(s);
    fields.push_back(v);
    fields.push_back(d);
    this->vars.push_back(fields);
}