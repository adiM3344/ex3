#include "SleepCommand.h"
#include <chrono>
#include <thread>

int SleepCommand::execute() {
    Interpreter i;
    double d = i.interpret(this->values[this->place])->calculate();
    this->place = this->place+1;
    this_thread::sleep_for(chrono::milliseconds((int)d));
    return 2;
}
