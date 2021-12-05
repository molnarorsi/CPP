//
// Created by Orsolya on 02.12.2021.
//

#ifndef LAB11_FUNCTIONS_H
#define LAB11_FUNCTIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <set>
#include <iterator>
#include <cstring>
#include <algorithm>
using namespace std;

map < string, set<int> > readFile(const string& fileName);
void print(ostream &out, map < string, set<int> > &words);

#endif //LAB11_FUNCTIONS_H
