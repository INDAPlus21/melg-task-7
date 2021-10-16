#include <stdio.h>

#define abs(a, b) (((a) < (b)) ? (b - a) : (a - b))

int main()
{
    long long number1;
    long long number2;

    // Continue until something else than two values is inserted
    while (scanf("%lld%lld", &number1, &number2) == 2) {
        printf("%lld\n", abs(number1, number2));
    }
}