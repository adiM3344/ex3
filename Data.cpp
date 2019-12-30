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

void Data::UpdateXMLMap(vector<double> values) {
    Singleton* singleton = Singleton::getInstance();
//    singleton->getMTX()->lock();
    map<string, Variable*> xml_map = *singleton->getXMLMap();
    Variable* var0 =  xml_map.at("/instrumentation/airspeed-indicator/indicated-speed-kt");
    var0->setValue(values[0]);
    xml_map["/instrumentation/airspeed-indicator/indicated-speed-kt"] = var0;
    Variable* var1 = xml_map.at("/sim/time/warp");
    var1->setValue(values[1]);
    xml_map["/sim/time/warp"] = var1;
    Variable* var2 =  xml_map.at("/controls/switches/magnetos");
    var2->setValue(values[2]);
    xml_map["/controls/switches/magnetos"] = var2;
    Variable* var3 =  xml_map.at("/instrumentation/heading-indicator/offset-deg");
    var3->setValue(values[3]);
    xml_map["/instrumentation/heading-indicator/offset-deg"] = var3;
    Variable* var4 =  xml_map.at("/instrumentation/altimeter/indicated-altitude-ft");
    var4->setValue(values[4]);
    xml_map["/instrumentation/altimeter/indicated-altitude-ft"] = var4;
    Variable* var5 =  xml_map.at("/instrumentation/altimeter/pressure-alt-ft");
    var5->setValue(values[5]);
    xml_map["/instrumentation/altimeter/pressure-alt-ft"] = var5;
    Variable* var6 =  xml_map.at("/instrumentation/attitude-indicator/indicated-pitch-deg");
    var6->setValue(values[6]);
    xml_map["/instrumentation/attitude-indicator/indicated-pitch-deg"] = var6;
    Variable* var7 =  xml_map.at("/instrumentation/attitude-indicator/indicated-roll-deg");
    var7->setValue(values[7]);
    xml_map["/instrumentation/attitude-indicator/indicated-roll-deg"] = var7;
    Variable* var8 =  xml_map.at("/instrumentation/attitude-indicator/internal-pitch-deg");
    var8->setValue(values[8]);
    xml_map["/instrumentation/attitude-indicator/internal-pitch-deg"] = var8;

    Variable* var9 =  xml_map.at("/instrumentation/attitude-indicator/internal-roll-deg");
    var9->setValue(values[9]);
    xml_map["/instrumentation/attitude-indicator/internal-roll-deg"] = var9;

    Variable* var10 =  xml_map.at("/instrumentation/encoder/indicated-altitude-ft");
    var10->setValue(values[10]);
    xml_map["/instrumentation/encoder/indicated-altitude-ft"] = var10;

    Variable* var11 =  xml_map.at("/instrumentation/encoder/pressure-alt-ft");
    var11->setValue(values[11]);
    xml_map["/instrumentation/encoder/pressure-alt-ft"] = var11;

    Variable* var12 =  xml_map.at("/instrumentation/gps/indicated-altitude-ft");
    var12->setValue(values[12]);
    xml_map["/instrumentation/gps/indicated-altitude-ft"] = var12;

    Variable* var13 =  xml_map.at("/instrumentation/gps/indicated-ground-speed-kt");
    var13->setValue(values[13]);
    xml_map["/instrumentation/gps/indicated-ground-speed-kt"] = var13;

    Variable* var14 =  xml_map.at("/instrumentation/gps/indicated-vertical-speed");
    var14->setValue(values[14]);
    xml_map["/instrumentation/gps/indicated-vertical-speed"] = var14;

    Variable* var15 =  xml_map.at("/instrumentation/heading-indicator/indicated-heading-deg");
    var15->setValue(values[15]);
    xml_map["/instrumentation/heading-indicator/indicated-heading-deg"] = var15;

    Variable* var16 = xml_map.at("/instrumentation/magnetic-compass/indicated-heading-deg");
    var16->setValue(values[16]);
    xml_map["/instrumentation/magnetic-compass/indicated-heading-deg"] = var16;

    Variable* var17 = xml_map.at("/instrumentation/slip-skid-ball/indicated-slip-skid");
    var17->setValue(values[17]);
    xml_map["/instrumentation/slip-skid-ball/indicated-slip-skid"] = var17;

    Variable* var18 = xml_map.at("/instrumentation/turn-indicator/indicated-turn-rate");
    var18->setValue(values[18]);
    xml_map["/instrumentation/turn-indicator/indicated-turn-rate"] = var18;

    Variable* var19 = xml_map.at("/instrumentation/vertical-speed-indicator/indicated-speed-fpm");
    var19->setValue(values[19]);
    xml_map["/instrumentation/vertical-speed-indicator/indicated-speed-fpm"] = var19;

    Variable* var20 = xml_map.at("/controls/flight/aileron");
    var20->setValue(values[20]);
    xml_map["/controls/flight/aileron"] = var20;
    Variable* var21 = xml_map.at("/controls/flight/elevator");
    var21->setValue(values[21]);
    xml_map["/controls/flight/elevator"] = var21;
    Variable* var22 =  xml_map.at("controls/flight/rudder");
    var22->setValue(values[22]);
    xml_map["controls/flight/rudder"] = var22;

    Variable* var23 = xml_map.at("/controls/flight/flaps");
    var23->setValue(values[23]);
    xml_map["/controls/flight/flaps"] = var23;

    Variable* var24 = xml_map.at("/controls/engines/engine/throttle");
    var24->setValue(values[24]);
    xml_map["/controls/engines/engine/throttle"] = var24;

    Variable* var25 = xml_map.at("/controls/engines/current-engine/throttle");
    var25->setValue(values[25]);
    xml_map["/controls/engines/current-engine/throttle"] = var25;
    Variable* var26 = xml_map.at("/controls/switches/master-avionics");
    var26->setValue(values[26]);
    xml_map["/controls/switches/master-avionics"] = var26;
    Variable* var27 = xml_map.at("/controls/switches/starter");
    var27->setValue(values[27]);
    xml_map["/controls/switches/starter"] = var27;
    Variable* var28 = xml_map.at("/engines/active-engine/auto-start");
    var28->setValue(values[28]);
    xml_map["/engines/active-engine/auto-start"] = var28;
    Variable* var29 = xml_map.at("/controls/flight/speedbrake");
    var29->setValue(values[29]);
    xml_map["/controls/flight/speedbrake"] = var29;
    Variable* var30 =  xml_map.at("/sim/model/c172p/brake-parking");
    var30->setValue(values[30]);
    xml_map["/sim/model/c172p/brake-parking"] = var30;
    Variable* var31 = xml_map.at("/controls/engines/engine/primer");
    var31->setValue(values[31]);
    xml_map["/controls/engines/engine/primer"] = var31;
    Variable* var32 = xml_map.at("/controls/engines/current-engine/mixture");
    var32->setValue(values[32]);
    xml_map["/controls/engines/current-engine/mixture"] = var32;
    Variable* var33 =  xml_map.at("/controls/switches/master-bat");
    var33->setValue(values[33]);
    xml_map["/controls/switches/master-bat"] = var33;
    Variable* var34 =  xml_map.at("/controls/switches/master-alt");
    var34->setValue(values[34]);
    xml_map["/controls/switches/master-alt"] = var34;
    Variable* var35 = xml_map.at("/engines/engine/rpm");
    var35->setValue(values[35]);
    xml_map["/engines/engine/rpm"] = var35;
    singleton->setXMLMap(&xml_map);
//    singleton->getMTX()->unlock();
}

void Data::initXMLMap() {
    Singleton* singleton = Singleton::getInstance();
    map<string, Variable*> xml_map;
    Variable* var0 =  new Variable("airspeed","/instrumentation/airspeed-indicator/indicated-speed-kt",false);
    xml_map["/instrumentation/airspeed-indicator/indicated-speed-kt"] = var0;
    Variable* var1 =  new Variable("warp","/sim/time/warp",false);
    xml_map["/sim/time/warp"] = var1;
    Variable* var2 =  new Variable("magnetos","/controls/switches/magnetos",false);
    xml_map["/controls/switches/magnetos"] = var2;
    Variable* var3 =  new Variable("heading","/instrumentation/heading-indicator/offset-deg",false);
    xml_map["/instrumentation/heading-indicator/offset-deg"] = var3;
    Variable* var4 =  new Variable("alt","/instrumentation/altimeter/indicated-altitude-ft",false);
    xml_map["/instrumentation/altimeter/indicated-altitude-ft"] = var4;

    Variable* var5 =  new Variable("","/instrumentation/altimeter/pressure-alt-ft",false);
    xml_map["/instrumentation/altimeter/pressure-alt-ft"] = var5;

    Variable* var6 =  new Variable("","/instrumentation/attitude-indicator/indicated-pitch-deg",false);
    xml_map["/instrumentation/attitude-indicator/indicated-pitch-deg"] = var6;

    Variable* var7 =  new Variable("roll","/instrumentation/attitude-indicator/indicated-roll-deg",false);
    xml_map["/instrumentation/attitude-indicator/indicated-roll-deg"] = var7;
    Variable* var8 =  new Variable("pitch","/instrumentation/attitude-indicator/internal-pitch-deg",false);
    xml_map["/instrumentation/attitude-indicator/internal-pitch-deg"] = var8;

    Variable* var9 =  new Variable("","/instrumentation/attitude-indicator/internal-roll-deg",false);
    xml_map["/instrumentation/attitude-indicator/internal-roll-deg"] = var9;

    Variable* var10 =  new Variable("","/instrumentation/encoder/indicated-altitude-ft",false);
    xml_map["/instrumentation/encoder/indicated-altitude-ft"] = var10;

    Variable* var11 =  new Variable("","/instrumentation/encoder/pressure-alt-ft",false);
    xml_map["/instrumentation/encoder/pressure-alt-ft"] = var11;

    Variable* var12 =  new Variable("","/instrumentation/gps/indicated-altitude-ft",false);
    xml_map["/instrumentation/gps/indicated-altitude-ft"] = var12;

    Variable* var13 =  new Variable("","/instrumentation/gps/indicated-ground-speed-kt",false);
    xml_map["/instrumentation/gps/indicated-ground-speed-kt"] = var13;

    Variable* var14 =  new Variable("","/instrumentation/gps/indicated-vertical-speed",false);
    xml_map["/instrumentation/gps/indicated-vertical-speed"] = var14;

    Variable* var15 =  new Variable("","/instrumentation/heading-indicator/indicated-heading-deg",false);
    xml_map["/instrumentation/heading-indicator/indicated-heading-deg"] = var15;

    Variable* var16 =  new Variable("","/instrumentation/magnetic-compass/indicated-heading-deg",false);
    xml_map["/instrumentation/magnetic-compass/indicated-heading-deg"] = var16;

    Variable* var17 =  new Variable("","/instrumentation/slip-skid-ball/indicated-slip-skid",false);
    xml_map["/instrumentation/slip-skid-ball/indicated-slip-skid"] = var17;

    Variable* var18 =  new Variable("","/instrumentation/turn-indicator/indicated-turn-rate",false);
    xml_map["/instrumentation/turn-indicator/indicated-turn-rate"] = var18;

    Variable* var19 =  new Variable("","/instrumentation/vertical-speed-indicator/indicated-speed-fpm",false);
    xml_map["/instrumentation/vertical-speed-indicator/indicated-speed-fpm"] = var19;

    Variable* var20 =  new Variable("aileron","/controls/flight/aileron",false);
    xml_map["/controls/flight/aileron"] = var20;
    Variable* var21 =  new Variable("elevator","/controls/flight/elevator",false);
    xml_map["/controls/flight/elevator"] = var21;
    Variable* var22 =  new Variable("rubber","controls/flight/rudder",false);
    xml_map["controls/flight/rudder"] = var22;

    Variable* var23 =  new Variable("","/controls/flight/flaps",false);
    xml_map["/controls/flight/flaps"] = var23;

    Variable* var24 =  new Variable("","/controls/engines/engine/throttle",false);
    xml_map["/controls/engines/engine/throttle"] = var24;

    Variable* var25 =  new Variable("throttle","/controls/engines/current-engine/throttle",false);
    xml_map["/controls/engines/current-engine/throttle"] = var25;
    Variable* var26 =  new Variable("masteravionics","/controls/switches/master-avionics",false);
    xml_map["/controls/switches/master-avionics"] = var26;
    Variable* var27 =  new Variable("starter","/controls/switches/starter",false);
    xml_map["/controls/switches/starter"] = var27;
    Variable* var28 =  new Variable("autostart","/engines/active-engine/auto-start",false);
    xml_map["/engines/active-engine/auto-start"] = var28;
    Variable* var29 =  new Variable("breaks","/controls/flight/speedbrake",false);
    xml_map["/controls/flight/speedbrake"] = var29;
    Variable* var30 =  new Variable("brakeparking","/sim/model/c172p/brake-parking",false);
    xml_map["/sim/model/c172p/brake-parking"] = var30;
    Variable* var31 =  new Variable("primer","/controls/engines/engine/primer",false);
    xml_map["/controls/engines/engine/primer"] = var31;
    Variable* var32 =  new Variable("mixture","/controls/engines/current-engine/mixture",false);
    xml_map["/controls/engines/current-engine/mixture"] = var32;
    Variable* var33 =  new Variable("masterbat","/controls/switches/master-bat",false);
    xml_map["/controls/switches/master-bat"] = var33;
    Variable* var34 =  new Variable("masterlat","/controls/switches/master-alt",false);
    xml_map["/controls/switches/master-alt"] = var34;
    Variable* var35 =  new Variable("rpm","/engines/engine/rpm",false);
    xml_map["/engines/engine/rpm"] = var35;
    singleton->setXMLMap(&xml_map);
}

