#include <stdio.h>

int main () {
  char c[2] = "a";

  for(int i = 0; i < 10; i++){
    putchar(c[i]);
  }
  return 0;
}