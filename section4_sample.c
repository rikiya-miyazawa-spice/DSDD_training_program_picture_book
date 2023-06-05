#include <stdio.h>

int main () {
  char c[15] = "hello, world!\n";

  printf("%c\n", c[0] - 32);
  printf("%c\n", c[1]);
  printf("%c\n", c[0] + 4);
  printf("%c\n", (c + 3)[0]);
  printf("%c\n", ((short *)c)[2]);
  printf("%c\n", ((short *)c)[3]);

  return 0;
}