//
// Created by adi on 12/16/19.
//
#include <iostream>
#include "Lexer.h"
#include <queue>
using namespace std;


list<string> Lexer::lexer(string file_name) {
    ifstream file(file_name, ios::in);
    queue<string> tokens;
    while (file) {
        string line;
        getline(file, line);
        int place = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line[line.length()-1] == '{') {
                while (line[i] != ' ') {
                    i++;
                }
                tokens.push(line.substr(place, i - place));
                i++;
                place = i;
                while (line[i] != '<' && line[i] != '>' && line[i] != '!' && line[i] != '=') {
                    i++;
                }
                if (line[i-1] == ' ') {
                    tokens.push(line.substr(place, i - 1 - place));
                } else {
                    tokens.push(line.substr(place, i - place));
                }
                place = i;
                if (line[i + 1] == '=') {
                    tokens.push(line.substr(place, 2));
                    i++;
                } else {
                    tokens.push(line.substr(place, 1));
                }
                if (line[i + 1] == ' ') {
                    i++;
                }
                place = i + 1;
                i = line.length();
                if (line[i - 2] == ' ') {
                    tokens.push(line.substr(place, i - 2 - place));
                } else {
                    tokens.push(line.substr(place, i - 1 - place));
                }
                tokens.push("{");
            }
            else if (line[i] == '}') {
                tokens.push("}");
            }
            else if (line[i] == '(') {
                tokens.push(line.substr(place, i-place));
                place = i + 1;
                while (line[i] != ')') {
                    if (line[i] == ',') {
                        tokens.push(line.substr(place, i-place));
                        place = i + 1;
                    }
                    i++;
                }
                tokens.push(line.substr(place, i-place));
            }
            else if ((line[i] == '-' && line [i+1] == '>') || ((line[i] == '<' && line [i+1] == '-'))) {
                if (line[i-1] != ' ') {
                    tokens.push(line.substr(place, i-place));
                    place = i;
                }
                tokens.push(line.substr(place, 2));
                i++;
                place = i + 1;
                if (line[i+1] == ' ') {
                    i++;
                    place = i + 1;
                    i++;
                }
            }
            else if (line[i] == '=') {
                if (line[i-1] != ' ') {
                    tokens.push(line.substr(place, i-place));
                    place = i;
                }
                tokens.push(line.substr(place, 1));
                place = i + 1;
                if (line[i+1] == ' ') {
                    place++;
                }
                tokens.push(line.substr(place, line.length() - place));
                i = line.length();
            }
            else if (line[i] == ' ') {
                tokens.push(line.substr(place, i-place));
                place = i + 1;
            }
            else if (line[i] == '\t') {
                place++;
            }
        }
    }
    int size = tokens.size();
    list<string> list;
    for (int i = 0; i < size; i++) {
        list.push_back(tokens.front());
        cout <<tokens.front()<<endl;
        tokens.pop();
    }
    return list;
}
