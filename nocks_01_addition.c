#include <stdio.h>

int main(void) {
    int num1, num2;
    num1 = 12345;
    num2 = 23456;

    char str1[20];
    sprintf(str1, "%d" , num1);
    char str2[20];
    sprintf(str2, "%d" , num2);
    printf("%s + %s = %d\n", str1, str2, num1 + num2);
    return 0;
}