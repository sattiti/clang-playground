#include <stdio.h>

/**
 * enum
 * int 型整数値の並びに特定の名前を与えるもの。
 */

/**
 * 特定な設定していないので 0 から順, 定数 整数値を与える
 */
enum Weeks{
    SUN = 7,
    MON = 1,
    TUE = 2,
    WED = 3,
    THU = 4,
    FRI = 5,
    SAT = 6
};

enum week {
  SUN,
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT
};

typedef enum Drink_{
    COLA,
    COFFEE,
    MILK,
    TEA
} Drink;

int main(int argc, char argv[]){
    printf("Weeks : %d\n", SUN);

    Drink cola = COLA;
    printf("Drink : %d", cola);
    return 0;
}
