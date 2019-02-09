#include <stdio.h>

// # pointer
// pointer は shortcut のようなもの。

// # NULL pointer
// pointer 変数は宣言直後に適当な値が代入されるため、誤ってそのアドレスを使用するとバグの原因となるとこがある。対策として、NULL 記号を pointer 変数に代入し、アドレスが代入されていないことを示せる。
//
// int *p = NULL;
//
// if(p == NULL)
// で比較することができる。
//
// p = 0;
// としても NULL pointer が代入されます。
//
// これは文法として決まっていることであり、
// NULL が 0 であるというわけではありません。

void pointer_mode(){
    // # pointer mode
    // 通常変数モード と ポインタ変数モード 2つある。
    // デフォルトでは、ポインタモードで、
    // * 記号をつければ、通常モードになる。
    int *p, i;
    p = &i;

    // 通常モードに切り替え 代入を行う
    *p = 10;
    printf("*p : %d\n", *p);
    printf("i  : %d\n", i);
}

void show_array_pointer(){
    // # 配列の仕組み
    // 最初のアドレスを決めておけば、それに番号を足し算することで、
    // たくさんの変数が並んでいるという状態を表現することが出来る。
    
    // & はアドレスを求める演算子
    // 配列の場合 & を付けなくて良い
    long iS[6];
    int len = sizeof(iS) / sizeof(iS[0]);
    int i;

    // # 配列のアドレス
    // 配列名は配列の最初の要素のアドレスはと同じものです。
    // &iS == &iS[0];
    printf("array  : %p\n", iS);

    // 要素のアドレス
    for(i = 0; i < len; i++){
        printf("%d 番目 : %p\n", i, &iS[i]);
    }
}


void var_pointer(){
    // # pointer
    //
    // 1. pointer 型
    // アドレスを記憶する変数の型のこと。
    // 他の型とポインタ型を合体させて作ります。
    // 他の型と合体しなければこの世には存在出来ないという、
    // いわば、寄生虫のような型なのです。
    // 例 : 
    // int 型と pointer  型を合体させると、
    // int への pointer 型という型。
    //
    // 2. pointer 値
    // 変数のアドレスの値のこと。
    //
    // 3. pointer 変数
    // pointer 値を記憶出来る変数のこと。

    // address を保存する int 型への pointer 型 の pointer 変数
    int *p, k;

    // p は i の address を保存する pointer 変数です。
    // & i の address を取得する演算子。
    printf("*p に k のアドレスを代入する。\n");
    printf("p 自身のアドレス          : %p\n", &p);
    p = &k;
    printf("k を p に代入後のアドレス : %p\n", p);
    printf("k 自身のアドレス          : %p\n", &k);
}

// main 
int main(int argc, char *argv[]){
    printf("\n----------\n\n");
    printf("# 配列要素のポインタ確認\n");
    show_array_pointer();

    printf("\n----------\n\n");
    printf("# ポインタ宣言\n");
    var_pointer();

    printf("\n----------\n\n");
    printf("# ポインタモードの確認\n");
    pointer_mode();

    return 0;
}
