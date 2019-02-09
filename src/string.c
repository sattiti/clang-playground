#include <stdio.h>
#include <stdlib.h>
#include <ctpye.h>
#include <string.h>

int main(int argc, char *argv[], char *envp[]){
  // string
  // 文字列の最後に特別な値を記憶しておくことで文字数を判定します。'\0' がEOSとして扱われます。'\0' は数値としては 0 にあたります。
  char mario[6] = {'M','A','R','I','O','\0'};
  char luigi[] = “luigi”;

  // str2num
  // atoi(str[]);

  // string copy
  // 代入でも使える
  // strcpy(new_str, old_str);
  char name[10];
  strcpy(name, "MARIO");
  printf("%s\n", str);

  // 指定した文字数をコピーする。
  // strncpy(new_str, old_str, num_of_str);
  // EOS がないため、追加する必要がある。

  // strcat
  // strcat(old_str, new_str);
  // sprintf(new_str, format, var1, ...);

  // string length
  // strlen(str);

  // string compare
  // strcmp(str1, str2) == 0 ? true : false;

  return 0;
}
