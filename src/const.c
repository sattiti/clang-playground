#include <stdio.h>

/**
 * const sample
 * 指定した変数の中身を変更させない目的。
 */

/**
 * main
 */
int main(int argc, char *argv[]){
    const int num1 = 2;
    // num1 = 3; コンパイルエラー
    
    printf("num1 : %d\n", num1);
    printf("num1 を変更しようとすると、コンパイルエラーになる。\n");
    return 0;
}
