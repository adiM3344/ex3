
#ifndef EX3_DEFINEVARCOMMAND_H
#define EX3_DEFINEVARCOMMAND_H

#include "Command.h"
#include "Singleton.h"
#include "ex1.h"
#include <string>
#include <vector>

using namespace std;

class DefineVarCommand : public Command {
    vector<vector<string>> vars;
    int place;
public:
    DefineVarCommand(string n, string d, string s) {
        vector<string> fields;
        fields.push_back(n);
        fields.push_back(s);
        fields.push_back("");
        fields.push_back(d);
        this->vars.push_back(fields);
        this->place = 0;
    }
    DefineVarCommand(string n, string v) {
        vector<string> fields;
        fields.push_back(n);
        fields.push_back("");
        fields.push_back(v);
        fields.push_back("");
        this->vars.push_back(fields);
        this->place = 0;
    }
    virtual int execute();
    void addVar(string n, string s, string v, string d);
};

#endif //EX3_DEFINEVARCOMMAND_H