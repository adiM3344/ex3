
#include "Parser.h"

void Parser::Parse(){
    list<string>::iterator it = this->command_list.begin();
    map<string, Command*> *map = &this->command_map;
    int index=0;
    int while_count=0;
    int if_count=0;
    while (it != this->command_list.end()){
        string command = *it;
        // if the string is a var's name
        if (Singleton::getInstance()->getSymbolTable()->count(command)) {
            command = command + "Set";
        }
        // if the string is 'while'
        else if (command == "while") {
            while_count++;
            command += (while_count + '0');
        }
        // if the string is 'if'
        else if (command == "if") {
            if_count++;
            command += (if_count + '0');
        }
        if(map->count(command)){
            Command* c = map->at(command);
            if(c!= nullptr){
                index = c->execute();
                for(int j=0; j<index; j++) {
                    it++;
                }
            }
        }
        else {
            throw "Unknown command: "+ command;
        }
    }
}

Parser::Parser(const list<string> &commandList, const map<string, Command*> &commandMap){
    this->command_list=commandList;
    this->command_map=commandMap;
}