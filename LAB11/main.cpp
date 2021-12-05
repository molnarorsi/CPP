#include <iostream>
#include "functions.h"

int main() {
    map<string, set<int>> indexes = readFile("indexes.txt");
    print(cout, indexes);
    return 0;
}
