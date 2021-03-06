
#ifndef EX3_DATA_H
#define EX3_DATA_H

#include "Singleton.h"
#include "Command.h"
#include "OpenServerCommand.h"
#include "ConnectCommand.h"
#include "DefineVarCommand.h"
#include "WhileCommand.h"
#include "IfCommand.h"
#include "PrintCommand.h"
#include "SleepCommand.h"
#include "SetVarCommand.h"
#include "NumCommand.h"
#include <map>
#include <list>
#include <vector>
#include <string>

using namespace std;

class Data {
public:
    map<string, Command*> InitMap(list<string>* l);
    static void UpdateXMLMap(vector<double> values);
    static void initXMLMap();
};

#endif //EX3_DATA_H