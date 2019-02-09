#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * union
 * 共用体は構造体に似ているが、複数のメンバが一つの記憶域を確保する。
 * 共用体はすべてのメンバが同じ領域に割り当てられているため、
 * 一度に1つのみのメンバが有効となります。
 */
union Rectangle
{
  double width;
  double height;
  double x;
  double y;
} rect;

int main(int argc, char argv[]){
  // 同一アドレスを利用しているため、最終的に全部 50 に出力される
  rect.width  = 100;
  rect.height = 510;
  rect.x      = 10;
  rect.y      = 50;

  printf("%lf\n", rect.width);
  printf("%lf\n", rect.height);
  printf("%lf\n", rect.x);
  printf("%lf\n", rect.y);

  return 0;
}
