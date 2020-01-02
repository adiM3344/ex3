
#include "Command.h"
#include "Lexer.h"
#include "Data.h"
#include "Parser.h"

using namespace std;

int main(int argc, char *argv[]) {
    Lexer lex;
    string s = argv[1];
    list<string> lexer_list = lex.lexer(s);
    Singleton* singleton = Singleton::getInstance();
    singleton->setLexerArray(&lexer_list);
    Data data_map;
    map<string, Command*> map = data_map.InitMap(singleton->getLexerArray());
    data_map.initXMLMap();
    singleton->setMap(map);
    Parser *parser = new Parser(*singleton->getLexerArray(), *singleton->getMap());
    parser->Parse();
    singleton->setConnected(false);
    delete singleton;
    return 0;
}
