
#include "Parser.h"

void Parser::Parse(){
    list<string>::iterator it = this->command_list.begin();
    map<string, Command*> *map = &this->command_map;
    int index=0;
    int while_count=0;
    int if_count=0;
//    int counter = 0;
//    int end = map->at("commands_num")->execute();
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
//    while (it != this->command_list.end()){
//        counter++;
//        string command = *it;
//        string temp;
//        if (it != this->command_list.begin()) {
//            temp = *(--it);
//            it++;
//        } else if (command != "openDataServer") {
//            temp = command;
//            it++;
//            command = *it;
//        }
//        if (command == "=") {
//            command = temp + "Set";
//        } else if (temp == "while") {
//            while_count++;
//            command = "while";
//            command += (while_count + '0');
//        } else if (temp == "if") {
//            if_count++;
//            command = "if";
//            command += (if_count + '0');
//        } else if (temp == "Print") {
//            command = "Print";
//        }
//        if(map->count(command)){
//            Command* c = map->at(command);
//            if(c!= nullptr){
//                index = c->execute();
//                //cout<<"parser"<<endl;
//                for(int j=0; j<index; j++) {
//                    it++;
//                }
//                if (counter == end) {
//                    it--;
//                    cout<<"~ parser is done ~"<<endl;
//                }
//            }
//        }
//        else {
//            throw "Unknown command: "+ command;
//        }
//    }
}

Parser::Parser(const list<string> &commandList, const map<string, Command*> &commandMap){
    this->command_list=commandList;
    this->command_map=commandMap;
}
