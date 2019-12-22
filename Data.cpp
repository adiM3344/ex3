//
// Created by ortal on 20/12/2019.
//
#include "Lexer.h"
#include "Command.h"
#include "OpenServerCommand.h"
#include "ConnectCommand.h"
#include "DefineVarCommand.h"
#include "Data.h"
#include "WhileCommand.h"
#include "IfCommand.h"
using namespace std;

void Data::InitMap(string *arr) {
    for(int i=0;i<arr->length(); i++){
        if(arr[i]=="openDataServer"){
            OpenServerCommand* c = new OpenServerCommand(arr[i+1]);
            this->commands_map.insert({arr[i],c});
            i++;
        }
        else if(arr[i]=="connectControlClient"){
            ConnectCommand* c = new ConnectCommand(arr[i+1],arr[i+2]);
            this->commands_map.insert({arr[i],c});
            i+=2;
        }
        else if(arr[i]=="var" && arr[i+2] == "="){
            DefineVarCommand* c = new DefineVarCommand(arr[i+1], arr[i+2]);
            this->commands_map.insert({arr[i],c});
            i+=2;
        }
        else if(arr[i]=="var"){
            DefineVarCommand* c = new DefineVarCommand(arr[i+1],arr[i+2],arr[i+4]);
            this->commands_map.insert({arr[i],c});
            i+=4;
//        }  else if(arr[i]=="while"){
//            WhileCommand* c = new WhileCommand(arr[i+1],arr[i+2],arr[i+4]);
//            this->commands_map.insert({arr[i],c});
//            i+=4;
//        } else if(arr[i]=="if"){
//            IfCommand* c = new IfCommand(arr[i+1],arr[i+2],arr[i+4]);
//            this->commands_map.insert({arr[i],c});
//            i+=4;
       }
    }
}
