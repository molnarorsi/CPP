//
// Created by Orsolya on 02.12.2021.
//

#include <cstring>
#include "functions.h"

void readFile(const string& fileName) {
    string word;
    ifstream input_file(fileName);
    map<string, int> frequency;
    if( !input_file.is_open() ) {
        cerr << "Couldn't open file " << fileName << "!" << endl;
    }

    while(getline(input_file, word)) {
        if( frequency.count(word) > 0 ) {
            frequency.insert(pair<string, int>(word, frequency[word]++));
        }
        else {
            frequency.insert(pair<string, int>(word,1));
        }
    }
    input_file.close();
}

void print() {
    map<string,int>::iterator it;
    map<string, int> frequency;
    for(it = frequency.begin(); it != frequency.end(); it++) {
        cout << it->first << ": " << it->second;
    }
}

void splitWords(char str[]) {
    char *token = strtok(str, " ");
    while(token != NULL) {
        token = strtok(NULL, " ");
    }
}
