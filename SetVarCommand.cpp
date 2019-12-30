
#include "SetVarCommand.h"
#include <sys/socket.h>
#include <string>
#include <cstring>


int SetVarCommand::execute() {
    Singleton* singleton = Singleton::getInstance();
    map<string, Variable*>* symbol_table = singleton->getSymbolTable();
    Variable* v = symbol_table->at(this->name);
    Interpreter i;
    double d = i.interpret(this->values[this->place])->calculate();
    this->place = this->place + 1;
    v->setValue(d);
    string message = "set " + v->getSimPath() + " " + this->values[this->place] + '\r' + '\n';
    //cout<<"the message is: "<<  message<<endl;
    int is_sent = send(singleton->getClientSocket(), message.c_str(), strlen(message.c_str()), 0);
    if (is_sent == -1) {
        std::cout<<"Error sending message"<<std::endl;
    } else {
        std::cout<<" message sent to server" <<std::endl;
    }
    return 3;
}
