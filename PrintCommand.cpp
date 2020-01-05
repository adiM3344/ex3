
#include "PrintCommand.h"
/**
 * prints the token accepted to the console
 * @return the number of indexes to move in the commands map
 */
int PrintCommand::execute() {
    // get the string that needs to be printed
    string print = this->values[this->place];
    this->place = this->place+1;
    // it it's a string
    if (print[0] == '\"') {
        cout << print.substr(1,print.size()-2) << endl;
    }
    // if it's a value which needs to be interpret
    else {
        Interpreter i;
        double d = i.interpret(print)->calculate();
        cout << d << endl;
    }
    return 2;
}