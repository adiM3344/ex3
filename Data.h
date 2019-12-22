//
// Created by ortal on 20/12/2019.
//

#ifndef EX3_DATA_H
#define EX3_DATA_H
#include <string>
#include "Command.h"
#include <map>


using namespace std;

class Data {
    map<string,Command*> commands_map;
public:
    void InitMap(string *);
};


#endif //EX3_DATA_H
