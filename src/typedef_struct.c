#include <stdio.h>

/**
 * typedef (keyword)
 *
 * 新しい型を作り出すのではなく、
 * 既存の型に新しい名前を付け加えるだけである。
 */
typedef char* Fruit;

/**
 * 構造体
 *
 * 複数の異なるデータ型のメンバから構成され、
 * 新しいデータ型を定義するために使用します。
 * 構造体のメンバは、それぞれが独自に記憶領域を確保します。
 */
typedef struct{
    char *name;
    int  age;
    char *gender;
} Student;


// 入れ子
typedef struct{
    double x;
    double y;
    double width;
    double height;
} Frame, Bounds;

typedef struct{
    Frame frame;
    Bounds bounds;
} GCPoint;

int main(int argc, char argv[]){
    // Fruit の実態は char*
    // char* 型を Fruit という名前を付け加えただけ。
    Fruit apple = "青りんご";
    printf("%s\n\n", apple);

    // typedef 構造体
    Student yamada = {"山田", 20, "M"};
    printf("お名前 : %s\n年齢   : %d\n性別   : %c\n\n", yamada.name, yamada.age, *yamada.gender);

    GCPoint point;
    point.frame.x      = 1.2;
    point.bounds.width = 100.0;
    printf("point.frame.x      = %f\npoint.bounds.width = %f", point.frame.x, point.bounds.width);

    return 0;
}
