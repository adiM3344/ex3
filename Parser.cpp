//
// Created by ortal on 22/12/2019.
//

#include "Parser.h"
#include "map"

using namespace std;

void Parser::Parse(){
    Singleton* s = Singleton::getInstance();
    int index=0;
    while (index < (*s->getLexerArray())->size()){
        string command = *s->getLexerArray()[index];
        Command * c = (*s->getMap()).at(command);
        if(c!= nullptr){
            index+=c->execute();
        } else {
            throw "Unknown command: "+ command;
        }
    }
}
