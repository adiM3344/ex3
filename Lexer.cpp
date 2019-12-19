//
// Created by adi on 12/16/19.
//
#include <iostream>
#include "Lexer.h"
#include <queue>
using namespace std;


string* Lexer::lexer(string file_name) {
    ifstream file(file_name, ios::in);
    queue<string> tokens;
    while (file) {
        string line;
        getline(file, line);
        bool operator_flag = false;
        bool curly_flag = false;
        int place = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line[line.length()-1] == '{') {
                curly_flag = true;
            }
            if (line[i] == '}') {
                tokens.push("}");
            }
            if (line[i] == '(') {
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
            if ((line[i] == '-' && line [i+1] == '>') || ((line[i] == '<' && line [i+1] == '-'))) {
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
            if (line[i] == ' ') {
                if ((line[i-1] == '=') || (line[i-1] == '<') || (line[i-1] == '>')) {
                    operator_flag = true;
                }
                tokens.push(line.substr(place, i-place));
                place = i + 1;
            }
            if (operator_flag) {
                if (curly_flag == true) {
                    i = line.length() - 2;
                    tokens.push(line.substr(place, i - place));
                    place = i + 1;
                    i = line.length();
                    tokens.push(line.substr(place, i - place));
                }
                else {
                    i = line.length();
                    tokens.push(line.substr(place, i - place));
                }
            }
        }
    }
    int size = tokens.size();
    string arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = tokens.front();
        tokens.pop();
        cout <<i<<": "<< arr[i]<<endl;
    }
    return arr;
}
