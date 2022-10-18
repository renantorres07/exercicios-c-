#include <cstdio>

int main()
{
    // type identifier = value
    double price = 99.80;
    double tax = 0.08;

    // type identifier = exp;
    double finalPrice = price * (1 + tax);

    printf("The final price is R$%.2f.\n", finalPrice);
    return 0;
}