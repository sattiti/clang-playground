#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]){
  // extern
  // 異なるソースファイルで変数を共有する。
  extern int sum(int min, int max);
  extern int public_var;
  
  return 0;
}
