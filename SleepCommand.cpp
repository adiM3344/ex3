#include "SleepCommand.h"
#include <chrono>
#include <thread>

int SleepCommand::execute() {
    this_thread::sleep_for(chrono::milliseconds(this->value));
    return 2;
}
