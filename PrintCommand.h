
#ifndef EX3_PRINTCOMMAND_H
#define EX3_PRINTCOMMAND_H

#include "Command.h"
#include "ex1.h"
#include "iostream"
#include <vector>
#include <string>

using namespace std;

class PrintCommand : public Command{
    vector<string> values;
    int place;
public:
    PrintCommand(string s) {
        this->values.push_back(s);
        this->place = 0;
    }
    virtual int execute();
    /**
     * adds a new value that needs to be printed to the print command
     * @param s the value
     */
    void addValue(string s) {
        this->values.push_back(s);
    }
};

#endif //EX3_PRINTCOMMAND_H