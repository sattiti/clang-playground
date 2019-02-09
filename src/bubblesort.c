#include <stdio.h>

#define LEN 10

/**
 * 大きい -> 小さい
 * @param score 点数の配列
 */
void bubbleSort(int target[]){
    int i   = 0;
    int j   = 0;
    int tmp = 0;

    for(i = 0; i < LEN -1; i++) {
        for(j = LEN -1; j > i; j--) {
            if(target[j -1] > target[j]) {
                tmp          = target[j];
                target[j]    = target[j -1];
                target[j -1] = tmp;
            }
        }
        printf("%d\n", target[i]);
    }
}

/**
 * main
 */
int main(int argc, char argv){
    int score[] = {43, 24, 87, 49, 69, 72, 34, 97, 12, 35};

    // 小 -> 大
    bubbleSort(score);
}
