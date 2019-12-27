#include <vector>
#include "Data.h"

map<string, Command*> Data::InitMap(list<string>* l) {
    map<string,Command*> commands_map;
    list<string>::iterator it = l->begin();
    string arr[l->size()];
    int while_count = 0;
    int if_count = 0;
    int commands_num = 0;
    for (int i = 0; i < l->size(); i++) {
        arr[i] = *it;
        it++;
    }
    for(int i=0;i<l->size(); i++){
        if(arr[i]=="openDataServer"){
            OpenServerCommand* c = new OpenServerCommand(arr[i+1]);
            commands_map.insert({arr[i],c});
            commands_num++;
            i++;
        }
        else if(arr[i]=="connectControlClient"){
            ConnectCommand* c = new ConnectCommand(arr[i+1],arr[i+2]);
            commands_map.insert({arr[i],c});
            commands_num++;
            i+=2;
        }
        else if(arr[i]=="var" && arr[i+2] == "="){
            DefineVarCommand* c = new DefineVarCommand(arr[i+1], arr[i+2]);
            commands_map.insert({arr[i+1],c});
            commands_num++;
            i+=2;
        }
        else if(arr[i]=="var"){
            DefineVarCommand* c = new DefineVarCommand(arr[i+1],arr[i+2],arr[i+4]);
            commands_map.insert({arr[i+1],c});
            commands_num++;
            i+=4;
        }
        else if(arr[i]=="while"){
            while_count++;
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
            WhileCommand* c = new WhileCommand(condition, while_commands);
            string command_name = "while";
            command_name += (while_count + '0');
            commands_map.insert({command_name ,c});
            commands_num++;
        }
        else if(arr[i]=="if"){
            if_count++;
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
            IfCommand* c = new IfCommand(condition, if_commands);
            string command_name = "if";
            command_name += (if_count + '0');
            commands_map.insert({command_name,c});
            commands_num++;
        }
        else if (arr[i] == "Print" || arr[i] == "print") {
            PrintCommand* c = new PrintCommand(arr[i+1]);
            commands_map.insert({("P"+arr[i+1]),c});
            commands_num++;
            i++;
        }
        else if (arr[i] == "Sleep" || arr[i] == "sleep") {
            SleepCommand* c = new SleepCommand(arr[i+1]);
            commands_map.insert({arr[i+1],c});
            commands_num++;
            i++;
        }
        else{
            string set_command = arr[i] + "Set";
            if (commands_map.count(set_command)) {
                SetVarCommand* c = (SetVarCommand*)commands_map.at(set_command);
                c->addValue(arr[i+2]);
            } else {
                SetVarCommand* c = new SetVarCommand(arr[i], arr[i+2]);
                commands_map.insert({set_command, c});
            }
            commands_num++;
            i+=2;
        }
    }
    Command* c = new NumCommand(commands_num);
    commands_map.insert({"commands_num", c});
    return commands_map;
}
