
#ifndef EX3_PRINTCOMMAND_H
#define EX3_PRINTCOMMAND_H


#include "Command.h"
#include <iostream>
#include "Singleton.h"
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
    void addValue(string s) {
        this->values.push_back(s);
    }
};


#endif //EX3_PRINTCOMMAND_H
