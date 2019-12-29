//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_DATA_H
#define EX3_DATA_H
#include <string>
#include "Command.h"
#include <map>
#include "Lexer.h"
#include "Command.h"
#include "OpenServerCommand.h"
#include "ConnectCommand.h"
#include "DefineVarCommand.h"
#include "WhileCommand.h"
#include "IfCommand.h"
#include "Singleton.h"
#include "PrintCommand.h"
#include "SleepCommand.h"
#include "SetVarCommand.h"
#include "NumCommand.h"

using namespace std;

class Data {
public:
    map<string, Command*> InitMap(list<string>* l);
    static void UpdateXMLMap(vector<double> values);

};


#endif //EX3_DATA_H
