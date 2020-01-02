
#include "ConnectCommand.h"

void ConnectCommand::sendToSim(int client_socket) {
    while(Singleton::getInstance()->isConnected()){
        queue<string>* messages = Singleton::getInstance()->getSimMessages();
        // if there is a new value to update
        while (!messages->empty()){
            int is_sent = send(client_socket, messages->front().c_str(), strlen(messages->front().c_str()),0);
            if (is_sent == -1) {
                std::cout<<"Error sending message"<<std::endl;
            } else {
                messages->pop();
            }
        }
    }
    close(client_socket);
}

int ConnectCommand::execute() {
    int port;
    Interpreter i;
    port = (int) i.interpret(this->port_string)->calculate();
    // create socket
    int client_socket = socket(AF_INET, SOCK_STREAM, 0);
    // if creation failed
    if (client_socket == -1) {
        std::cerr << "Could not create a socket"<<std::endl;
        return -1;
    }
    // connect
    sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr(this->ip.c_str());
    address.sin_port = htons(port);
    // Requesting a connection with the server on local host with the port
    int is_connect = connect(client_socket, (struct sockaddr *)&address, sizeof(address));
    if (is_connect == -1) {
        cerr << "Could not connect to host server"<<endl;
        return -1;
    } else {
        std::cout<<"Client is now connected to server" <<std::endl;
    }
    // create thread
    thread *t = new thread(&ConnectCommand::sendToSim, client_socket);
    Singleton::getInstance()->addThread(t);
    t->detach();
    return 3;
}