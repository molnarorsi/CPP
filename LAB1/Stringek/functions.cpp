//
// Created by Orsolya on 27.09.2021.
//

#include "functions.h"

int addNumeric(int argc, char* argv[] ) {
    double sum = 0;
    for(int i = 1; i < argc; i++) {
        istringstream iss(argv[i]);
        double d;
        if(iss >> d) {
            sum += d;
        }
    }
    cout << sum << endl;
}

int countWords(string text) {
    istringstream iss(text);
    string temp;
    int counter = 0;
    while(iss) {
        //iss >> temp;
        counter++;
    }
    return counter;
}

string code(string text) {
    for(int i = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            if(text[i] == 'z') {
                text[i] = 'a';
            }
            else if (text[i] == 'Z') {
                text[i] = 'A';
            }
            else {
                text[i] += 1;
            }
        }
    }
    return text;
}

string decode(string text) {
    for(int i = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            if(text[i] == 'a') {
                text[i] = 'z';
            }
            else if (text[i] == 'A') {
                text[i] = 'Z';
            }
            else {
                text[i] -= 1;
            }
        }
    }
    return text;
}

string capitalize(string text) {
    for(int i = 0; i < text.length(); i++) {
        if(i == 0) {
            text[i] = toupper(text[i]);
        }
        else if(text[i-1] == ' ') {
            text[i] = toupper(text[i]);
        }
    }
    return text;
}




