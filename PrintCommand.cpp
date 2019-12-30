
#include "PrintCommand.h"

int PrintCommand::execute() {
    string print = this->values[this->place];
    this->place = this->place+1;
    if (print[0] == '\"') {
        cout << print.substr(1,print.size()-2) << endl;
    } else {
        Interpreter i;
        double d = i.interpret(print)->calculate();
        cout << d << endl;
    }
    return 2;
}