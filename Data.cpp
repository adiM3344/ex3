#include <vector>
#include "Data.h"

void Data::InitMap() {
    Singleton* singleton = Singleton::getInstance();
    map<string,Command*> commands_map;
    singleton->setMap(commands_map);
    list<string>* l = singleton->getLexerArray();
    list<string>::iterator it = l->begin();
    string arr[l->size()];
    for (int i = 0; i < l->size(); i++) {
        arr[i] = *it;
        it++;
    }
    for(int i=0;i<arr->size(); i++){
        if(arr[i]=="openDataServer"){
            OpenServerCommand* c = new OpenServerCommand(arr[i+1]);
            commands_map.insert({arr[i],c});
            i++;
        }
        else if(arr[i]=="connectControlClient"){
            ConnectCommand* c = new ConnectCommand(arr[i+1],arr[i+2]);
            commands_map.insert({arr[i],c});
            i+=2;
        }
        else if(arr[i]=="var" && arr[i+2] == "="){
            DefineVarCommand* c = new DefineVarCommand(arr[i+1], arr[i+2]);
            commands_map.insert({arr[i],c});
            i+=2;
        }
        else if(arr[i]=="var"){
            DefineVarCommand* c = new DefineVarCommand(arr[i+1],arr[i+2],arr[i+4]);
            commands_map.insert({arr[i],c});
            i+=4;
        }
        else if(arr[i]=="while"){
            list<string> while_commands;
            vector<string> condition;
            i++;
            while(arr[i] != "{") {
                condition.push_back(arr[i]);
                i++;
            }
            i++;
            while(arr[i] != "}"){
                while_commands.push_back(arr[i]);
                i++;
            }
            i++;
            WhileCommand* c = new WhileCommand(condition, while_commands);
            commands_map.insert({"while",c});
        }
        else if(arr[i]=="if"){
            list<string> if_commands;
            vector<string> condition;
            i++;
            while(arr[i] != "{") {
                condition.push_back(arr[i]);
                i++;
            }
            i++;
            while(arr[i] != "}"){
                if_commands.push_back(arr[i]);
                i++;
            }
            i++;
            IfCommand* c = new IfCommand(condition, if_commands);
            commands_map.insert({"if",c});
        }
        else if (arr[i] == "Print") {
            PrintCommand* c = new PrintCommand(arr[i+1]);
            commands_map.insert({arr[i],c});
            i++;
        }
        else if (arr[i] == "Sleep") {
            SleepCommand* c = new SleepCommand(arr[i+1]);
            commands_map.insert({arr[i],c});
            i++;
        }
        else{
            SetVarCommand* c = new SetVarCommand(arr[i], arr[i+2]);
            commands_map.insert({arr[i],c});
            i+=2;
        }
    }
    singleton->setMap(commands_map);
}
