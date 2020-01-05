
#include "Lexer.h"

/**
 * separates the file to tokens list
 * @param file_name
 * @return a list of all tokens from the file separated
 */
list<string> Lexer::lexer(string file_name) {
    queue<string> tokens;
    list<string> list;
    ifstream file(file_name, ios::in);
    if (!file.is_open()) {
        cout<<"Could not open file"<<endl;
        return list;
    }
    while (file) {
        string line;
        getline(file, line);
        int place = 0;
        int length = line.length();
        for (int i = 0; i < length; i++) {
            // if it's a loop/condition line (has '{')
            if (line[length-1] == '{') {
                // get the first word - the loop type
                while (line[i] != ' ') {
                    i++;
                }
                tokens.push(line.substr(place, i - place));
                i++;
                place = i;
                // get the left side of the condition
                while (line[i] != '<' && line[i] != '>' && line[i] != '!' && line[i] != '=') {
                    i++;
                }
                // skip spaces
                if (line[i-1] == ' ') {
                    tokens.push(line.substr(place, i - 1 - place));
                } else {
                    tokens.push(line.substr(place, i - place));
                }
                place = i;
                // get the operator of the condition
                if (line[i + 1] == '=') {
                    tokens.push(line.substr(place, 2));
                    i++;
                } else {
                    tokens.push(line.substr(place, 1));
                }
                // skip spaces
                if (line[i + 1] == ' ') {
                    i++;
                }
                place = i + 1;
                // get the right side of the condition (the rest of the line)
                i = length;
                if (line[i - 2] == ' ') {
                    tokens.push(line.substr(place, i - 2 - place));
                } else {
                    tokens.push(line.substr(place, i - 1 - place));
                }
                tokens.push("{");
            }
            // if it's the end of the loop/condition
            else if (line[i] == '}') {
                tokens.push("}");
            }
            // get what's in the parentheses
            else if (line[i] == '(') {
                tokens.push(line.substr(place, i-place));
                place = i + 1;
                while (line[i] != ')') {
                    // if there is more than one object in the parentheses
                    if (line[i] == ',') {
                        tokens.push(line.substr(place, i-place));
                        place = i + 1;
                    }
                    i++;
                }
                tokens.push(line.substr(place, i-place));
            }
            // if it's an arrow
            else if ((line[i] == '-' && line [i+1] == '>') || ((line[i] == '<' && line [i+1] == '-'))) {
                if (line[i-1] != ' ') {
                    tokens.push(line.substr(place, i-place));
                    place = i;
                }
                tokens.push(line.substr(place, 2));
                i++;
                place = i + 1;
                // skip spaces
                if (line[i+1] == ' ') {
                    i++;
                    place = i + 1;
                    i++;
                }
            }
            // if it's an assignment
            else if (line[i] == '=') {
                // get the var's name
                if (line[i-1] != ' ') {
                    tokens.push(line.substr(place, i-place));
                    place = i;
                }
                tokens.push(line.substr(place, 1));
                place = i + 1;
                // skip spaces
                if (line[i+1] == ' ') {
                    place++;
                }
                // get the value that needs to be assigned
                tokens.push(line.substr(place, length - place));
                i = length;
            }
            // skip tabs
            else if (line[i] == '\t') {
                i++;
                place++;
            }
            // skip tabs
            else if (line[i] == ' ' && line[i+1] == ' ' && line[i+2] == ' ' && line[i+3] == ' ') {
                i += 3;
                place = i + 1;
            }
            // for any other word
            else if (line[i] == ' ') {
                if (i != 0) {
                    tokens.push(line.substr(place, i-place));
                }
                place = i + 1;
            }
        }
    }
    int size = tokens.size();
    string toke="";
    // convert from a queue to a list
    for (int i = 0; i < size; i++) {
        toke=tokens.front();
        // remove quotes
        if(toke[0]=='\"' && toke[toke.size()-1]=='\"' && toke[1] == '/'){
           toke = toke.substr(1,toke.size()-2);
        }
        list.push_back(toke);
        tokens.pop();
    }
    return list;
}