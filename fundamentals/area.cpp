// Pi = 3.1415
// Pi * radius * radius

#include <iostream>
using namespace std;

int main() {
    double Pi = 3.1415;
    double raio;

    cout << "Insira o valor do raio: ";
    cin >> raio;

    double area = Pi * raio * raio;
    cout << "A area e: " << area;

    return 0;
}