//
// Created by Orsolya on 02.12.2021.
//

#include <algorithm>
#include <sstream>
#include "functions.h"
using namespace std;

map < string, set<int> > readFile(const string& fileName) {
    ifstream input_file(fileName);
    if( !input_file.is_open() ) {
        cerr << "Couldn't open file " << fileName << "!" << endl;
    }

    map< string, set< int > > index;
    set< int > set;

    string line;

    while( getline(input_file, line) ) {
        if( line.length() == 0 ) {
            break;
        }
        for_each( line.begin(), line.end(), [] (char& c) {
            c = ::toupper( c );
        } );
        index.emplace( line, set );
    }

    int counter = 1;

    while( getline(input_file, line) ) {
        replace_if( line.begin(), line.end(), [] (char c) {
            return !isalpha( c );
        }, ' ');

        for_each( line.begin(), line.end(), [] (char& c) {
            c = ::toupper( c );
        } );

        istringstream ss( line );

        string words;

        while( ss >> words ) {
            for( auto& it : index ) {
                if( it.first == words ) {
                    index[it.first].insert(counter);
                }
            }
        }

        counter++;
    }

    input_file.close();
    return index;
}

void print(ostream &out, map < string, set<int> > &words) {
    for (auto i = words.begin(); i != words.end() ; ++i) {
        out << i->first << " ";

        set<int> st = i->second;

        for (auto &j : st) {
            out << " " << j;
        }
        out << endl;
    }
}