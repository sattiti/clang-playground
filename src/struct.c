#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct
// 複数の異なるデータ型のメンバから構成され、新しいデータ型を定義するために使用する。
// 構造体のメンバは、それぞれが独自に記憶領域を確保する。

// Student は構造体タグ名です。
struct Student{
    char *name;
    int  age;
    char *gender;
};

int main(int argc, char *argv[]){
    printf("# struct\n");
    printf("\n----------\n\n");

    printf("山田 : \n");
    struct Student yamada = {"山田", 20, "M"};
    printf("お名前 : %s\n年齢 : %d\n性別 : %c\n", yamada.name, yamada.age, *yamada.gender);

    printf("\n----------\n\n");

    struct Student tanaka;
    tanaka.name   = "田中";
    tanaka.age    = 23;
    tanaka.gender = "F";
    printf("%s : \n", tanaka.name);
    printf("お名前 : %s\n年齢 : %d\n性別 : %c\n", tanaka.name, tanaka.age, *tanaka.gender);

    printf("\n----------\n\n");
    return 0;
}
