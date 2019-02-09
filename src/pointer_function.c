#include <stdio.h>

// function pointer
// 関数を動的に変更できる。
//
// 戻り値の型 (*識別名)(引数の型);
// int (*func)(int)

// prototype
//typedef int (*FUNC_PT)(int a, int b);
int (*cal)(int a, int b);
int plus(int a, int b);
int sub(int a, int b);

// main
int main(int argc, char *argv[]){
    int *func;
    printf("plus() を使った計算。\n");
    printf("結果 : 4 + 2 = %d\n\n", plus(4, 2));
    printf("sub() を使った計算。\n");
    printf("結果 : 4 - 2 = %d\n\n", sub(4, 2));

    cal = plus;
    printf("plus() を cal() に代入しました。\n");
    printf("cal() ポインタ関数を使った計算。\n");
    printf("結果 : 4 + 2 = %d\n\n", cal(4, 2));

    cal = sub;
    printf("sub() を cal() に代入しました。\n");
    printf("(*cal)(4, 2) の呼出方もOK.\n");
    printf("結果 : 4 - 2 = %d\n\n", (*cal)(4, 2));
    return 0;
}


// function
int plus(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}
