
#include "SleepCommand.h"

int SleepCommand::execute() {
    // get the string of the time it need sleep
    string time = this->values[this->place];
    this->place = this->place+1;
    // interpret the string
    Interpreter i;
    double d = i.interpret(time)->calculate();
    this_thread::sleep_for(chrono::milliseconds((int)d));
    return 2;
}
