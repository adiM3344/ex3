#include <iostream>
#include <fstream>
#include "Lexer.h"
using namespace std;

int main(int argc, char *argv[]) {
    Lexer lex;
    string s = argv[1];
    cout<< s<<endl;
//    lex.lexer(s);
    string* arr= lex.lexer(s);
    return 0;
}
