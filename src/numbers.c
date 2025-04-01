#include "numbers.h"

int is_even(int num) {
    return num % 2 == 0;
}

int count_evens(const int array[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (is_even(array[i])) {
            count++;
        }
    }
    return count;
}

int count_odds(const int array[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!is_even(array[i])) {
            count++;
        }
    }
    return count;
}
