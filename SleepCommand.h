
#ifndef EX3_SLEEPCOMMAND_H
#define EX3_SLEEPCOMMAND_H

#include "Command.h"
#include "ex1.h"
#include <chrono>
#include <thread>
#include <vector>
#include <string>

using namespace std;

class SleepCommand : public Command{
    vector<string> values;
    int place;
public:
    SleepCommand(string s) {
        this->values.push_back(s);
        this->place = 0;
    }
    virtual int execute();
    /**
     * adds a new value for the sleep command
     * @param s the value
     */
    void addValue(string s) {
        this->values.push_back(s);
    }
};

#endif //EX3_SLEEPCOMMAND_H