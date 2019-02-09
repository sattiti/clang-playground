#include <stdio.h>

int main(int argc, char *argv[]){
    // 逆参照演算子   "*"
    // アドレス演算子 "&"
    
    // ポインタではない変数
    int aa = 2;
    int bb;
    
    // ポインタ変数を宣言
    int *pp;

    // pp ポインタ変数に &aa のアドレスを代入
    // 初期化する時の書き方
    // int *pp = &aa;
    pp = &aa;

    printf("aa 自身のアドレス                                 : %p === &aa\n", &aa);
    printf("pp 自身のアドレス                                 : %p === &pp\n", &pp);
    printf("pp ポインタ変数の値(この場合、即ち aa のアドレス) : %p === &aa === pp\n", pp);
    printf("aa の値                                           : %d\n", aa);
    printf("pp ポインタの値(* 参照演算子を使う。)             : %d\n", *pp);
    printf("\n\n");

    *pp = 4;

    // pp ポインタの値 を bb に代入する
    bb  = *pp;
    bb  = 2;

    printf("%s\n\n", "pp の値を *pp = 4; のように変更してみると、aa の値も変更されてしまう。");
    printf("aa 自身のアドレス                                 : %p === &aa\n", &aa);
    printf("pp 自身のアドレス                                 : %p === &pp\n", &pp);
    printf("bb 自身のアドレス                                 : %p === &bb\n", &bb);
    printf("pp ポインタ変数の値(この場合、即ち aa のアドレス) : %p === &aa === pp\n", pp);
    printf("aa の値                                           : %d\n", aa);
    printf("pp ポインタの値(* 参照演算子を使う。)             : %d\n", *pp);
    printf("bb の値                                           : %d\n", bb);
    printf("\n");

    return 0;
}
