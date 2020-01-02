
#ifndef EX3_SETVARCOMMAND_H
#define EX3_SETVARCOMMAND_H

#include "Command.h"
#include "Singleton.h"

using namespace std;

class SetVarCommand : public Command {
    string name;
    vector<string> values;
    int place;
public:
    SetVarCommand(string n, string v){
        this->name = n;
        this->values.push_back(v);
        this->place = 0;
    }
    int execute() override;
    void addValue(string v) {
        this->values.push_back(v);
    }
};

#endif //EX3_SETVARCOMMAND_H