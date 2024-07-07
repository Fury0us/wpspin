#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed random number generator

    for (int i = 0; i < 50; i++) { // generate 10 combinations
        for (int j = 0; j < 8; j++) { // generate 8-digit combination
            cout << rand() % 10; // generate random digit between 0 and 9
        }
        cout << endl;
    }

    return 0;
}
