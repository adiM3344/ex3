//
// Created by ortal on 22/12/2019.
//

#include "Parser.h"
#include "map"

using namespace std;

void Parser::Parse(){
    Singleton* s = Singleton::getInstance();
    list<string>::iterator it = this->command_list.begin();
    map<string, Command*> *map = s->getMap();
    int index=0;
    while (it != this->command_list.end()){
        string command = *it;
        if((*map).at(command)){
        Command* c = (*map).at(command);
        if(c!= nullptr){
            index = c->execute();
            for(int j=0; j<index; j++) {
                it++;
            }
        }// im the symbol table
       // } else if (){

        } else {
            throw "Unknown command: "+ command;
        }
    }
}

Parser::Parser(const list<string> &commandList) : command_list(commandList) {
    this->command_list=commandList;
}
