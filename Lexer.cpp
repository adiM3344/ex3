//
// Created by adi on 12/16/19.
//
#include <iostream>
#include "Lexer.h"
#include <queue>
using namespace std;


string* Lexer::lexer(string file_name) {
    ifstream file(file_name, ios::in);
    queue<string> strings;


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
                strings.push(line[i]+"");
                cout << line[i]<<endl;
            }
            if (line[i] == '(') {
                strings.push(line.substr(place, i-place));
                cout << line.substr(place, i-place)<<endl;
                place = i + 1;
                while (line[i] != ')') {
                    if (line[i] == ',') {
                        strings.push(line.substr(place, i-place));
                        cout << line.substr(place, i-place)<<endl;

                        place = i + 1;
                    }
                        i++;
                }
                strings.push(line.substr(place, i-place));
                cout << line.substr(place, i-place)<<endl;;
            }
            if (line[i] == ' ') {
                if ((line[i-1] == '=') || (line[i-1] == '<') || (line[i-1] == '>')) {
                    operator_flag = true;
                }
                strings.push(line.substr(place, i-place));
                cout << line.substr(place, i-place)<<endl;
                place = i + 1;
            }
            if (operator_flag) {
                if (curly_flag == true) {
                    i = line.length() - 2;
                    strings.push(line.substr(place, i - place));
                    cout << line.substr(place, i - place) << endl;
                    place = i + 1;
                    i = line.length();
                    strings.push(line.substr(place, i - place));
                    cout << line.substr(place, i - place) << endl;
                }
                else {
                    i = line.length();
                    strings.push(line.substr(place, i - place));
                    cout << line.substr(place, i - place) << endl;
                }
            }
        }
    }
    //    string str2="(";
//    size_t found = whole_file.find(str2);
//    if (found!=std::string::npos)
    string nothing;
    string* nothingp = &nothing;
    return nothingp;
}
