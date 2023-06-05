#include <stdio.h>
int main(int argc, char *argv[])
{
  double a = 0.1;
  double b = 0.2;
  int c = (a + b == 0.3);
  printf("%f + %f = 0.3 の比較結果は %d" , a, b, c);
  return 0;
}