//
// Created by ortal on 22/12/2019.
//

#include "Parser.h"
#include "map"

using namespace std;

Parser::Parser(const map<string, Command*> commands, string * lex_arr) : commands_map(commands), lexer_arr(lex_arr) {
    this->commands_map=commands;
    this->lexer_arr=lex_arr;
}
void Parser::Parse(){
    int index=0;
    while (index < this->lexer_arr->size()){
        string command=this->lexer_arr[index];
        Command * c = this->commands_map.at(command);
        if(c!= nullptr){
            index+=c->execute();
        } else {
            throw "Unknown command: "+ command;
        }
    }
}
