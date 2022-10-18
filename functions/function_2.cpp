#include <iostream>
#include "function_2.h"
using namespace std;


int main() {
    log(3);
    log(4);
    log(5);

    log(6, false);
    log(7, false);
    log(8, false);

    log();
    log();
    log();

    return 0;
}

void log(int number, bool newLine) {
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";
}