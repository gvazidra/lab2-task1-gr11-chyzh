#include <stdio.h>
#include "numbers.h"

#define SIZE 8

int main() {
    int a[SIZE], b[SIZE];
    
    printf("Введите %d элементов массива A:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Введите %d элементов массива B:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &b[i]);
    }
    
    int evens_in_a = count_evens(a, SIZE);
    int odds_in_b = count_odds(b, SIZE);
    
    printf("\nРезультаты:\n");
    printf("Четных чисел в массиве A: %d\n", evens_in_a);
    printf("Нечетных чисел в массиве B: %d\n", odds_in_b);
    
    return 0;
}
