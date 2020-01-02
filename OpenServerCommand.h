
#ifndef EX3_OPENSERVERCOMMAND_H
#define EX3_OPENSERVERCOMMAND_H

#include "Command.h"
#include "Singleton.h"
#include "ex1.h"
#include "Data.h"
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <cstring>
#include <iostream>
#include <string>
#include <thread>
#include <vector>

using namespace std;

class OpenServerCommand: public Command {
    string port_string;
public:
    OpenServerCommand(string p) {
        this->port_string= p;
    }
    static void readFromSim(int client_socket, int socketfd);
    virtual int execute();
};

#endif //EX3_OPENSERVERCOMMAND_H