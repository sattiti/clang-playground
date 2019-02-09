#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


// char のタイプを調べる
int typeof_char(char c){
    // #include <ctype.h>
    // isalnum()  英数字   A-Z, a-z, 0-9
    // isdigit()  10進数   0-9
    // isxdigit() 16進数   A-F, a-f, 0-9
    // isalpha()  英字     A-Z, a-z
    // isupper()  英大文字 A-Z
    // islower()  英小文字 a-z
    // ispunct()  記号     !"#$%&'()*+,- /:;<=>?@^_`{|}~
    // isspace()  スペース 0x09-0x0D, 0x20
    int num;

    // 10進数
    return num = isdigit(c) ? c - '0' : 0;
}

// 文字列を数値に変換した結果を変数に代入する
int str2num(char str[]){
    // #include <stdlib.h>
    // +-の付いた符号付きの数字も変換できる。
    // 数字とは関係ない文字列が指定された場合は、0 に変換される。
    // 実数(小数点付き)に変換する場合、atof()
    //return atoi(str);
    return atoi(str);
}

/**
 * main
 */
int main(int argc, char *argv[]){
    char str1[] = "MARIO";
    char str2[] = "123456";

    // char のタイプを調べる
    printf("----------\n\n");
    printf("# 文字のチェック\n");
    printf("%d\n\n", typeof_char('A'));
    printf("----------\n\n");

    // 文字列
    // 最後に \0 か EOS を入れる
    //char str[6] = {'M', 'A', 'R', 'I', 'O', '\0'};  <- これでも良い
    printf("# 文字列\n");
    printf("%s\n\n", str1);
    printf("----------\n\n");


    // 文字列を数値に変換した結果を変数に代入する
    printf("# 文字列を数値へ変換\n");
    printf("文字列 \"%s\" を数値に変換した結果 : %d\n\n", str2, str2num(str2));
    printf("----------\n\n");


    // 文字列のコピー
    // #include <string.h>
    // strcpy(コピー先文字列配列名, コピー元文字列配列名);
    printf("# 文字列のコピー\n");
    char str3[sizeof(str1) / sizeof(str1[0])];
    strcpy(str3, str1);
    printf("%s\n\n", str3);
    printf("----------\n\n");


    // strncpy(コピー先文字列配列名, コピー元文字列配列名, コピーする文字数);
    // 最後に必ず EOS を付けます。
    printf("# 先頭から指定された文字数だけをコピーする\n");
    int str4_len = 3;
    char str4[str4_len];
    // 3 文字だけコピーする
    strncpy(str4, str1, str4_len);
    // EOS を付加
    str4[str4_len] = '\0';
    printf("%s\n\n", str4);
    printf("----------\n\n");

    // 文字の連結
    // strcat(char[] 元の文字列, char[] 追加する文字列);
    // 元の文字列 + 追加する文字列だけの大きさが必要になる。
    // 少ない要素数の文字配列に無理矢理詰め込むと暴走につながります。
    printf("# 文字を連結する\n");
    char str5[12] = "Hello";
    strcat(str5, str2);
    printf("str1 と str2 を連結した結果 : %s\n\n", str5);
    printf("----------\n\n");

    // sprintf()
    // sprintf(結果を記憶する配列, 書式文字列, 各種変数..,);
    printf("# sprintf による文字を連結する\n");
    char str6[20];
    sprintf(str6,"%s%s\n", str1, str2);
    printf(str6);
    printf("----------\n\n");


    // 文字列の入力
    // 数字の場合   : & をつける
    // 文字列の場合 : & 付けない 
    char str7[32];
    int num7;

    printf("# 数字と文字列の入力\n");

    printf("文字列を入力してください。\n", str7);
    // & を付けない !!!
    // 要素数が32の場合は%32sと指定すると、
    // それ以上の文字は切り捨てられ、暴走を防ぐ。
    // この方法では、スペースを入力できないこと。
    // スペースが区切り記号として認識されるためです。
    scanf("%32s", str7);
    printf("文字列 %s を入力されました。\n\n", str7);

    // & を付ける !!!
    printf("数字を入力してください。\n", &num7);
    scanf("%d", &num7);
    printf("数字 %d を入力されました。\n\n", num7);
    printf("----------\n\n");


    // 文字数を数える
    printf("# 文字数を数える\n");
    printf("for 文を使う場合 : \n");
    int num8;
    for(num8 = 0; str1[num8] != '\0'; num8++);
    printf("str1 (%s) の文字数は %d です。\n\n", str1, num8);

    printf("strlen を使う場合 : \n");
    int num9 = strlen(str2);
    printf("str2 (%s) の文字数は %d です。\n", str2, num9);
    printf("----------\n\n");




    // 文字列を比較する
    // 単純に == を使って、比較することができない。
    printf("# 文字列を比較する\n");
    printf("for 文を使う場合 : \n");
    int len9 = 0;
    int i9   = 0;
    len9 = strlen(str1);
    for(i9 = 0; i9 < len9 +1; i9++){
        if(str1[i9] != str2[i9]) break;
    }

    if(i9 == len9 +1){
        printf("str1 は str2 と同じ\n\n");
    }
    else{
        printf("str1 は str2 と違う\n\n");
    }

    // string.h が必要
    printf("strcmp を使う場合 : \n");
    char str10[] = "MARIO";
    if(strcmp(str1, str10) == 0){
        printf("str1 は str10 と同じ\n\n");
    }
    else{
        printf("str1 は str10 と違う\n\n");
    }
    printf("----------\n\n");

    return 0;
}
