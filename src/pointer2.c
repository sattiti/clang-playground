#include <stdio.h>

// # pointer 型の引数
// 単に引数の型がポインタ型であるだけで、普通の引数と変わらない。

// prototype
void pointer_param_func(int *pval);
int get_avg(int data[], int len);

// main
int main(int argc, char *argv[]){
    printf("----------\n\n");
    printf("# pointer 引数の使用\n");
    int val = 10;
    printf("val      : %d\nアドレス : %p\n\n", val, &val);

    printf("val のアドレスを pointer_param_func(int *pval) に渡す。\n");
    pointer_param_func(&val);
    printf("val      : %d\nアドレス : %p\n\n", val, &val);
    printf("----------\n\n");


    printf("----------\n\n");
    printf("# 配列を引数として渡す。\n");
    printf("平均点を求める\n");
    int points[] = {98, 34, 21, 56, 96, 43, 33, 24, 65, 23};
    
    // 同じスコープ内ではないと、
    // sizeof が効かないので引数として渡す。
    int avg = get_avg(points, sizeof(points) / sizeof(points[0]));
    printf("平均点 : %d\n", avg);
    printf("----------\n\n");
}

void pointer_param_func(int *pval){
    printf("pval     : %p\n", pval);
    *pval = 100;
    return;
}

int get_avg(int data[], int len){
    int i, total;
    for(i = 0; i < len; i++){
        total += data[i];
    }
    return total / len;
}
