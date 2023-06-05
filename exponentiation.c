#include <stdio.h>
#include <math.h>

int main(void) {
    int number = 2;
    double result = pow(number, 32.0);
    printf("%dの32乗は%lf\n", number, result);
    return 0;
}