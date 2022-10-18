#include <iostream>
using namespace std;

const double pi = 3.141592;
int g = 1;

void func3(){
    cout << "exec.." << endl;
}

void func2(){
    g += 10;
    func3(); 
    {
        int a = 3;
        cout << a << endl;
    }
}

void func1(){
    g += 1;
    func2();
}

int main() {
    func1();

    cout << g;
    return 0;
}

// stack!