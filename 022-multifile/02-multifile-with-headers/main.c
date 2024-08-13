#include <stdio.h>
#include "add.h"

// Compile this flags
// gcc -o main main.c add.c

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};

    int result = add(sizeof(arr) / sizeof(arr[0]), arr);

    printf("result: %d\n", result);

    return 0;
}