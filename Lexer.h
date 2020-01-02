
#ifndef EX3_LEXER_H
#define EX3_LEXER_H

#include "Singleton.h"
#include <fstream>
#include <queue>
#include <list>
#include <string>

using namespace std;

class Lexer {
public:
    list<string> lexer(string file_name);
};

#endif //EX3_LEXER_H