#include <stdio.h>
#include <memory.h>

int main(int argc, char *argv[]){
    int score1[] = {309, 444, 325, 294, 483, 983, 214, 294, 821, 23};
    int score2[] = {2, 4, 1, 7};
    
    // 配列のコピー
    // memcpy(コピー先, コピー元, 配列全体のサイズ);
    // memcpy() を利用する際、#include memory.h しなければならない。
    int i    = 0;
    int len2 = 0;

    len2 = sizeof(score2) / sizeof(score2[0]);

    printf("\nコピー前 : \n");
    for(i = 0; i < len2; i++){
        printf("array2[%d] = %d\n", i, score2[i]);
    }

    // コピーする
    // memcpy(new_ary, old_ary, sizeof(old_ary));
    memcpy(score2, score1, sizeof(score1));
    len2 = sizeof(score2) / sizeof(score2[0]);

    printf("\nコピー後 : \n");
    for(i = 0; i < len2; i++){
        printf("array2[%d] = %d\n", i, score2[i]);
    }
    return 0;
}
