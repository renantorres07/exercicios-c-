#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a; // assignement copies the value

    a++;
    b--;

    cout << a << " " << b;

    return 0;
}