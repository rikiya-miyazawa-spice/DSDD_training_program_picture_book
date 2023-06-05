#include <stdio.h>

int main () {
  char c[14] = "Hello World!\n";
  printf("%s", c);
  // %cは文字を１文字だけ出力するフォーマット指定子
  // %sは文字列を出力するフォーマット指定子 今回は%sを使う
  return 0;
}