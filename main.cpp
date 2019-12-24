#include <iostream>
#include <fstream>
#include "Lexer.h"
#include "Command.h"
#include "OpenServerCommand.h"
#include "ConnectCommand.h"
#include "DefineVarCommand.h"
#include "Data.h"
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
    Lexer lex;
    string s = argv[1];
    cout<< s<<endl;
    string *arr = lex.lexer(s);
    Singleton* singleton = Singleton::getInstance();
    singleton->setLexerArray(arr);
    Data data_map;
    data_map.InitMap();
//    map<string,Command*> commands_map;
//    for(int i=0;i<arr->length(); i++){
//        if(arr[i]=="openDataServer"){
//            OpenServerCommand* c = new OpenServerCommand(arr[i+1]);
//            commands_map.insert({arr[i],c});
//            i++;
//        }
//        else if(arr[i]=="connectControlClient"){
//            ConnectCommand* c = new ConnectCommand(arr[i+1],arr[i+2]);
//            commands_map.insert({arr[i],c});
//            i+=2;
//        }
//        else if(arr[i]=="var" && arr[i+2] == "="){
//            DefineVarCommand* c = new DefineVarCommand(arr[i+1], arr[i+2]);
//            commands_map.insert({arr[i],c});
//            i+=2;
//        }
//        else if(arr[i]=="var"){
//            DefineVarCommand* c = new DefineVarCommand(arr[i+1],arr[i+2],arr[i+4]);
//            commands_map.insert({arr[i],c});
//            i+=4;
//        }
//    }
    return 0;
}
