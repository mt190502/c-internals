#include "add.h"
#include "minus.h"
#include <stdio.h>

// Compile after creating the object files (add.o and minus.o)
// gcc -o main main.c add.o minus.o

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};

    int result = add(sizeof(arr) / sizeof(arr[0]), arr);

    printf("result: %d\n", result);

    printf("====================================\n");

    int val1 = 10, val2 = 5;

    int result2 = minus(val1, val2);

    printf("result2: %d\n", result2);

    return 0;
}