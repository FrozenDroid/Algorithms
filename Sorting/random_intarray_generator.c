//
// Created by Vincent Stakenburg on 25/06/2017.
//

#include "random_intarray_generator.h"
#include <stdlib.h>

int* generateRandomIntegers(unsigned int i) {
    srand(0);
    
    int* arr = malloc(i);

    for (int x = 0; x < i; x++) {
        arr[x] = rand();
    }

    return arr;
}
