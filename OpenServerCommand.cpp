
#include <string>
#include <iostream>
#include <thread>
#include "OpenServerCommand.h"

using namespace std;

void OpenServerCommand::readFromSim(int client_socket, int socketfd) {
    int valread=0,vector_index=0;
    while (valread != -1 && Singleton::getInstance()->isConnected()) {
        Singleton::getInstance()->getMTX()->lock();
        //reading from client
        char buffer[100000] = {0};
        valread = read( client_socket , buffer, 100000);
        string  value="";
        vector<double> values;
        for(int i=0;i < strlen(buffer); i++) {
            if(buffer[i]==','){
                double num=atof(value.c_str());
                values.push_back(num);
                vector_index++;
                value = "";
                continue;
            }
            value = value+buffer[i];
        }

        values.push_back(atof(value.c_str()));
        Data::UpdateXMLMap(values);
        Singleton::getInstance()->getMTX()->unlock();
    }
    close(socketfd);
}

int OpenServerCommand::execute() {
//create socket
    int socketfd = socket(AF_INET, SOCK_STREAM, 0);
    if (socketfd == -1) {
        //error
        std::cerr << "Could not create a socket"<<std::endl;
        return -1;
    }

    //bind socket to IP address
    // we first need to create the sockaddr obj.
    sockaddr_in address{}; //in means IP4
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY; //give me any IP allocated for my machine
    address.sin_port = htons(this->port);
    //we need to convert our number
    // to a number that the network understands.

    //the actual bind command
    if (bind(socketfd, (struct sockaddr *) &address, sizeof(address)) == -1) {
        std::cerr<<"Could not bind the socket to an IP"<<std::endl;
        return -2;
    }

    //making socket listen to the port
    if (listen(socketfd, 5) == -1) { //can also set to SOMAXCON (max connections)
        std::cerr<<"Error during listening command"<<std::endl;
        return -3;
    } else{
        std::cout<<"Server is now listening ..."<<std::endl;
    }

    // accepting a client
    int client_socket = accept(socketfd, (struct sockaddr *)&address, (socklen_t*)&address);

    if (client_socket == -1) {
        std::cerr<<"Error accepting client"<<std::endl;
        return -4;
    }
    cout<<"Server is now connected" <<std::endl;
    Singleton::getInstance()->setConnected(true);
//    close(socketfd); //closing the listening socket
    thread *t = new thread(&OpenServerCommand::readFromSim, client_socket, socketfd);
    Singleton::getInstance()->addThread(t);
    t->detach();

//    //writing back to client
//    char *hello = "Hello, I can hear you! \n";
//    send(client_socket , hello , strlen(hello) , 0 );
//    std::cout<<"Hello message sent\n"<<std::endl;
    return 2;
}


