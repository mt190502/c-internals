#include <stdio.h>
#include "add.h"

int main(void) {
    int x[] = {10, 20, 30, 40, 50};
    int sum = add(sizeof(x) / sizeof(int), x);

    printf("sum = %d\n", sum);
    return 0;
}