
#include "OpenServerCommand.h"

void OpenServerCommand::readFromSim(int client_socket, int socketfd) {
    int valRead = 0, vector_index = 0;
    while (valRead != -1 && Singleton::getInstance()->isConnected()) {
        Singleton::getInstance()->getMTX()->lock();
        //reading from client
        char buffer[100000] = {0};
        valRead = read(client_socket, buffer, 100000);
        string  value = "";
        vector<double> values;
        // separate the values of the buffer
        for(int i=0; i < strlen(buffer); i++) {
            if(buffer[i]==','){
                double num = atof(value.c_str());
                values.push_back(num);
                vector_index++;
                value = "";
                continue;
            }
            value = value+buffer[i];
        }
        values.push_back(atof(value.c_str()));
        // update the values read from socket
        Data::UpdateXMLMap(values);
        Singleton::getInstance()->getMTX()->unlock();
    }
    close(socketfd);
}

int OpenServerCommand::execute() {
    int port;
    Interpreter i;
    port = (int) i.interpret(this->port_string)->calculate();
    // create socket
    int socketfd = socket(AF_INET, SOCK_STREAM, 0);
    // if creation failed
    if (socketfd == -1) {
        std::cerr << "Could not create a socket"<<std::endl;
        return -1;
    }
    //bind socket to IP address
    sockaddr_in address{};
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(port);
    if (bind(socketfd, (struct sockaddr *) &address, sizeof(address)) == -1) {
        cerr<<"Could not bind the socket to an IP"<<endl;
        return -1;
    }
    //making socket listen to the port
    if (listen(socketfd, 5) == -1) {
        cerr<<"Error during listening command"<<endl;
        return -1;
    } else {
        cout<<"Server is now listening ..."<<endl;
    }
    // accepting a client
    int client_socket = accept(socketfd, (struct sockaddr *)&address, (socklen_t*)&address);
    // if acceptance failed
    if (client_socket == -1) {
        cerr<<"Error accepting client"<<endl;
        return -1;
    }
    cout<<"Server is now connected" <<endl;
    Singleton::getInstance()->setConnected(true);
    // create thread
    thread *t = new thread(&OpenServerCommand::readFromSim, client_socket, socketfd);
    Singleton::getInstance()->addThread(t);
    t->detach();
    return 2;
}