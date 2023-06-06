#include <stdio.h> // 昇順
// バブルソートは隣の値と比較して、昇順・降順に並び替えるアルゴリズム
int main(void)
{
    int i, j; // iは基準となる値  jは基準と比較される値
    int num[5] = {2, 1, 5, 3, 7};
    int tmp; // 退避させた値を一時保存するための変数
    for (i=0 ; i < 5 ; i++)
        {
        printf("初期%d\n ", num[i]);
        }
    // 昇順ソートのプログラム
    // このループが１回転すると、１つ値が確定する
    // iが0の時は見つけた値を[0]にする
    // 確定したら次の確定場所にiを移動する(i++)
    for (i = 0; i < 5; i++) // 値を確定する場所を管理
    {   // 最小の値を見つけ出すループ
        // iを基準として残りのカードを順番に大小比較していく
        // i + 1 というのは基準カードの隣の位置から探索が始まるため
        printf("i%d ", i);
        printf("num[i]%d ", num[i]);
        for (j = i + 1; j < 5; j++) // 最小の値を探し出す
        {
            printf("j%d ", j);
            printf("num[i]%d ", num[i]);
            printf("num[j]%d\n ", num[j]);
            // 基準[i]の値より小さい値が見つかったら
            if (num[i] > num[j])
            {
                tmp = num[i]; // 一時保存用の変数に基準の値を退避させる
                printf("tmp%d ", tmp);
                num[i] = num[j]; // 基準の値を新たに見つけた最小の値に入れ替える
                printf("num[i]%d ", num[i]);
                num[j] = tmp; // 入れ替わった最小の値(num[1])の隣の値(num[j])を最初の基準値の値(tmp)にする
                printf("num[j]%d\n ", num[j]);
            }
        }
    }

    // 並べ替え結果の表示
    for (i=0 ; i < 5 ; i++)
    {
    printf("結果%d ", num[i]);
    }

    return 0;
}
// 実行結果
// 初期2
// 初期1
// 初期5
// 初期3
// 初期7
// i0 num[i]2 j1 num[i]2 num[j]1
// tmp2 num[i]1 num[j]2
// j2 num[i]1 num[j]5
// j3 num[i]1 num[j]3
// j4 num[i]1 num[j]7
// i1 num[i]2 j2 num[i]2 num[j]5
// j3 num[i]2 num[j]3
// j4 num[i]2 num[j]7
// i2 num[i]5 j3 num[i]5 num[j]3
// tmp5 num[i]3 num[j]5
// j4 num[i]3 num[j]7
// i3 num[i]5 j4 num[i]5 num[j]7
// i4 num[i]7 結果1 結果2 結果3 結果5 結果7
// ./a.out  0.00s user 0.00s system 2% cpu 0.253 total