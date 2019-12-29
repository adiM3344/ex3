//
// Created by ortal on 17/12/2019.
//

#ifndef EX3_CONNECTCOMMAND_H
#define EX3_CONNECTCOMMAND_H

#include "Command.h"
#include <sys/socket.h>
#include <string>
#include <iostream>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <cstring>

#include <string>
using namespace std;
class ConnectCommand : public Command {
    int port;
    string ip;
public:
    ConnectCommand(string ipAdd, string p) {
        this->port=stoi(p);
        this->ip = ipAdd;
    }
    static void readFromClient();
    virtual int execute();


};


#endif //EX3_CONNECTCOMMAND_H
