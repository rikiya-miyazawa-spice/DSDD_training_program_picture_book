#include <stdio.h>

/* データの数 */
#define NUM 10

/* 数字を入れ替える関数 */
void swap(int *a, int *b) {
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}

/* クイックソートを行う関数 */
void quickSort(int a[], int left, int right) {
    int pivot;
    int i, j;

    /* ソートを行う範囲が１以下の場合 */
    if(left >= right) {
        return;
    }

    /* pivot の決定 */
    pivot = a[left];

    i = left;
    j = right;

    /* pivot以下の数字を配列の前半に
       pivot以上の数字を配列の後半に集める */
    while(1) {
        /* pivot以上の数字を左側から探索 */
        while (a[i] < pivot) {
            i++;
        }

        /* pivot以下の数字を右側から探索 */
        while (a[j] > pivot) {
            j--;
        }

        /* i >= j になったということは
           配列の左側にpivot以下の数字が、
        　　配列の右側にpivot以上の数字が集まったということ */
        if (i >= j) {
            /* 集合の分割処理は終了 */
            break;
        }

        /* 探索した２つの数字を交換 */
        swap(&(a[i]), &(a[j]));

        /* 交換後の数字の次から探索再開 */
        i++;
        j--;

    }

    /* 小さい数字を集めた範囲に対してソート */
    quickSort(a, left, i - 1);

    /* 大きい数字を集めた範囲に対してソート */
    quickSort(a, j + 1, right);

}

/* 配列を初期化する関数 */
void initArray(int a[]) {
    a[0] = 5;
    a[1] = 0;
    a[2] = 9;
    a[3] = 7;
    a[4] = 1;
    a[5] = 6;
    a[6] = 3;
    a[7] = 8;
    a[8] = 4;
    a[9] = 2;
}

/* 配列のデータを表示する関数 */
void printArray(int a[], int num){
    int i;
    for (i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int array[NUM];

    /* 配列を初期化 */
    initArray(array);

    /* ソート前の配列の表示 */
    printArray(array, NUM);

    /* クイックソート */
    quickSort(array, 0, NUM-1);

    /* ソート後の配列の表示 */
    printArray(array, NUM);

    return 0;

}