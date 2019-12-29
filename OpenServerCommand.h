//
// Created by ortal on 17/12/2019.
//
#include "Command.h"
#ifndef EX3_OPENSERVERCOMMAND_H
#define EX3_OPENSERVERCOMMAND_H
#include <sys/socket.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include <netinet/in.h>
#include <cstring>
#include "Singleton.h"
#include <string>
#include "Data.h"
using namespace std;

class OpenServerCommand: public Command {
    int port;
public:
    OpenServerCommand(string p) {
        this->port= stoi(p);
    }
    static void readFromSim(int client_socket);
    virtual int execute();


};


#endif //EX3_OPENSERVERCOMMAND_H
