//
// Created by ortal on 22/12/2019.
//

#include "Parser.h"
#include "map"

using namespace std;

void Parser::Parse(){
    Singleton* s = Singleton::getInstance();
    list<string>* arr = s->getLexerArray();
    list<string>::iterator it = arr->begin();
    int index=0;
    while (it != (*arr).end()){
        string command = *it;
        Command* c = (*s->getMap()).at(command);
        if(c!= nullptr){
            index = c->execute();
            for(int j=0; j<index; j++) {
                it++;
            }
        } else {
            throw "Unknown command: "+ command;
        }
    }
}
