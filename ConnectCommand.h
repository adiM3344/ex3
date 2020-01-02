
#ifndef EX3_CONNECTCOMMAND_H
#define EX3_CONNECTCOMMAND_H

#include "Command.h"
#include "Singleton.h"
#include "ex1.h"
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <cstring>
#include <iostream>
#include <string>
#include <thread>
#include <queue>

using namespace std;

class ConnectCommand : public Command {
    string port_string;
    string ip;
public:
    ConnectCommand(string ipAdd, string p) {
        this->port_string = p;
        this->ip = ipAdd.substr(1, ipAdd.length() - 2);
    }
    static void sendToSim(int client_socket);
    virtual int execute();
};

#endif //EX3_CONNECTCOMMAND_H