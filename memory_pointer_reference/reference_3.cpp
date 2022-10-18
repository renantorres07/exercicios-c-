#include <iostream>
using namespace std;

int main() {
    
    // string& badRef 

    string greeting = "Hi!";
    string& ref = greeting;

    string name = "Peter";
    ref = name;

    cout << name << "\t" << ref << "\t" << greeting << endl;
    cout << &greeting << "\t" << &ref << endl;

    cout << greeting << "\t" << ref << endl;

    return 0;
}