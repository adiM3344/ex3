#include <iostream>
#include <fstream>
#include "Lexer.h"
#include "Command.h"
#include "OpenServerCommand.h"
#include "ConnectCommand.h"
#include "DefineVarCommand.h"
#include "Data.h"
#include "Parser.h"
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
    Lexer lex;
    string s = argv[1];
    list<string> lexer_list = lex.lexer(s);
    Singleton* singleton = Singleton::getInstance();
    singleton->setLexerArray(&lexer_list);
    Data data_map;
    data_map.InitMap();
    Parser *parser=new Parser(lexer_list);
    parser->Parse();
    return 0;
}
