#include <iostream>

#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
    double sum = 0;
    for (int i = 1; i < argc; ++i) {
        istringstream iss(argv[i]);
        double d;
        if (iss >> d) {
            sum += d;
        }
    }

    cout << sum << endl;

    return 0;
}