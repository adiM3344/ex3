//
// Created by ortal on 17/12/2019.
//

#include "ConnectCommand.h"
#include "OpenServerCommand.h"
#include <thread>

using namespace std;

void ConnectCommand::sendToSim(int client_socket) {
    while(Singleton::getInstance()->isConnected()){

        queue<string>* messages = Singleton::getInstance()->getSimMessages();
        Singleton::getInstance()->getMTX()->lock();
        while (!messages->empty()){
            int is_sent = write(client_socket, messages->front().c_str(), strlen(messages->front().c_str()));
            if (is_sent == -1) {
                std::cout<<"Error sending message"<<std::endl;
            } else {
                messages->pop();
                std::cout<<" message sent to server" <<std::endl;
            }
        }
        Singleton::getInstance()->getMTX()->unlock();
    }
    close(client_socket);
}
int ConnectCommand::execute() {
//create socket
    int client_socket = socket(AF_INET, SOCK_STREAM, 0);
    //Singleton::getInstance()->setClientSocket(client_socket);
    if (client_socket == -1) {
        //error
        std::cerr << "Could not create a socket"<<std::endl;
        return -1;
    }

    //We need to create a sockaddr obj to hold address of server
    sockaddr_in address; //in means IP4
    address.sin_family = AF_INET;//IP4
    address.sin_addr.s_addr = inet_addr(this->ip.c_str());  //the localhost address
    address.sin_port = htons(this->port);
    //we need to convert our number (both port & localhost)
    // to a number that the network understands.

    // Requesting a connection with the server on local host with port 8081
    int is_connect = connect(client_socket, (struct sockaddr *)&address, sizeof(address));
    if (is_connect == -1) {
        std::cerr << "Could not connect to host server"<<std::endl;
        return -2;
    } else {
        std::cout<<"Client is now connected to server" <<std::endl;
        Singleton::getInstance()->setConnectedToClient(true);
    }

    thread *t = new thread(&ConnectCommand::sendToSim, client_socket);
    Singleton::getInstance()->addThread(t);
    t->detach();


//    //if here we made a connection
//    char hello[] = "Hi from client";
//    int is_sent = send(client_socket , hello , strlen(hello) , 0 );
//    if (is_sent == -1) {
//        std::cout<<"Error sending message"<<std::endl;
//    } else {
//        std::cout<<"Hello message sent to server" <<std::endl;
//    }

//    char buffer[1024] = {0};
//    int valread = read( client_socket , buffer, 1024);
//    std::cout<<buffer<<std::endl;

//    close(client_socket);

    return 3;
}
