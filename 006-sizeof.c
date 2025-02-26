#include <stdio.h>

int main(void) {
    int num = 999;

    // zu is a format specifier for size_t
    printf("%zu\n", sizeof(num));
    printf("%zu\n", sizeof(int));

    size_t size = sizeof(num);
    printf("%zu\n", size);

    return 0;
}