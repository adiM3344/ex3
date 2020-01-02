
#include "Command.h"
#include "Singleton.h"
#include "Lexer.h"
#include "Data.h"
#include "Parser.h"
#include <string>
#include <list>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
    string file_name = argv[1];
    Lexer lex;
    list<string> lexer_list = lex.lexer(file_name);
    Singleton* singleton = Singleton::getInstance();
    Data data_map;
    map<string, Command*> map = data_map.InitMap(&lexer_list);
    data_map.initXMLMap();
    singleton->setMap(map);
    Parser *parser = new Parser(lexer_list, *singleton->getMap());
    parser->Parse();
    singleton->setConnected(false);
    delete singleton;
    return 0;
}