//#include <stdio.h>
#include "negate.h"

static const ARRAY_SIZE = 5;

int main() {
    int array[] = { 1, -2, 5, -6, 2 };

    for (int i = 0; i < ARRAY_SIZE; i ++) {
        if (array[i] < 0) {
            array[i] = negate(array[i]);
        }
    }

//    int j = 0;
//    for (; j < ARRAY_SIZE - 1; j ++) {
//        printf("%d, ", array[j]);
//    }
//    printf("%d", array[j]);

    return 0;
}
