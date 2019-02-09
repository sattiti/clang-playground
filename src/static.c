#include <stdio.h>

/**
 * static sample
 * 値はプログラムが終了するまで残る
 */

/**
 * Prototype
 */
int count_func(void);

/**
 * main
 */
int main(int argc, char *argv[]){
    count_func();
    count_func();
    count_func();

    return 0;
}

/**
 * 実装
 */
int count_func(void){
    // static 修飾子。静的なローカル変数
    // 型の前に付ける
    static int count = 0;
    count ++;

    printf("%d\n", count);
    return count;
}
