#include <stdio.h>

int main(void)
{
    int a, b;
    a = 1;
    b = 2;
    int i;
    int int_array[4] = {3, 4, 5, 6};

    printf("aの値は，%d です\n",  a); /*  普通に値を表示  */
    printf("bの値は，%d です\n",  b);
    for(i = 0; i < 4; ++i){
      printf("int_array[%d]の値は，%d です\n", i,  int_array[i]);
    }
    printf("aのアドレスは，%p です\n", &a); /*  %p はアドレスを16進数8桁で表示する */
    printf("bのアドレスは，%p です\n", &b);
    for(i = 0; i < 4; ++i){
          printf("int_array[%d]の値のアドレスは，%p です\n", i,  &int_array[i]);
    }
}