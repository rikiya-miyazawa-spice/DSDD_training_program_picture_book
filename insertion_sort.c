#include <stdio.h>

/* データの数 */
#define NUM 10

void insertionSort(int a[], int num) {
    int select; /* 選択したデータの位置 */
    int insert; /* データを挿入する位置 */
    int data; /* 挿入するデータ */
    int sorted; /* ソート済みの集合のデータ数 */
    int i;

    /* 初期段階でのソート済みの集合の数は１つ */
    sorted = 1;

    /* 全データがソート済みの集合に移動するまでソートを繰り返す */
    while (sorted < num) {

        /* 未ソートの集合のデータを１つ選択 */
        select = sorted; /* 未ソートの集合の先頭 */
        data = a[select];

        /* ソート済み集合の中から選択したデータを挿入する位置を決定 */
        for (i = 0; i < sorted; i++) {

            if (a[i] > data) {
                /* 昇順に並べるので、dataより大きいデータの手前に挿入 */
                break;
            }
        }
        /* 挿入する位置を記憶 */
        insert = i;

        /* 挿入する位置から選択した要素の１つ前までの要素を全て１つ後ろにずらす */
        for (i = select - 1; i >= insert; i--) {
            a[i + 1] = a[i];
        }

        /* 挿入する位置にデータを格納 */
        a[insert] = data;

        /* ソート済みの集合にデータが挿入されたのでsortedを+1 */
        sorted++;
    }
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

    /* 選択ソート */
    insertionSort(array, NUM);

    /* ソート後の配列の表示 */
    printArray(array, NUM);

    return 0;

}
// 実行速度
//5 0 9 7 1 6 3 8 4 2
//0 1 2 3 4 5 6 7 8 9
//./a.out  0.00s user 0.00s system 62% cpu 0.006 total

