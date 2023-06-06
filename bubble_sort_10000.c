#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main() {
  int size = 10000;
  int array[size];

  // ランダムな10000個の数字の配列を生成
  for (int i = 0; i < size; i++) {
    array[i] = i + 1;
  }

  // 配列をシャッフル
  for (int i = 0; i < size - 1; i++) {
    int j = i + rand() / (RAND_MAX / (size - i) + 1);
    int temp = array[j];
    array[j] = array[i];
    array[i] = temp;
  }

  // バブルソートで昇順に並び替え
  bubbleSort(array, size);

  // 結果を表示
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}

//実行結果
//./a.out  0.17s user 0.00s system 41% cpu 0.425 total