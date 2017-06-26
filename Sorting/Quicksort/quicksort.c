#include <stdio.h>
#include <stdlib.h>
#include "../random_intarray_generator.h"

int main() {
    unsigned int l = 3;
    int* arr = generateRandomIntegers(l);

    for (int x = 0; x < l; x++) {
        int y = arr[x];
        char str[2];
        printf("%d\n", y);
    }
    return 0;
}