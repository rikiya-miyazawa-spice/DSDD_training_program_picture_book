#include <stdio.h>
#include <limits.h> //int型の値の範囲を確認するために、ヘッダーファイル「limits.h」をインクルード

int main(void) {
    int num = 1;
    // int型の変換指定子はd
    printf("int型変数numの値: %d\n", num);

    // int型での割り算
    double div1 = num / 2;
    double div2 = num / (double)2; // キャストして割り算
    printf("%d / 2 は: %lf\n", num, div1);
    printf("%d / 2 は: %lf\n", num, div2);

    // int型、unsigned int型のサイズおよび最小値、最大値
    printf("int型のバイト数は%ldバイト\n", sizeof(num));
    printf("int型の数値の最小値: %d\n", INT_MIN);
    printf("int型の数値の最大値: %d\n", INT_MAX);
    printf("unsigned int型の数値の最小値: %d\n", 0);
    printf("unsigned int型の数値の最大値: %u\n", UINT_MAX);

    return 0;
}