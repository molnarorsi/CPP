#include "functions.h"
#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << countWords("Piros alma csung a fan") << endl;
    cout << code("Piros alma csung a Fan Csak egy csokert faj a szam") << endl;
    cout << decode("Piros alma csung a Fan Csak egy csokert faj a szam") << endl;
    cout << capitalize("Piros alma csung a Fan Csak egy csokert faj a szam") << endl;
}
