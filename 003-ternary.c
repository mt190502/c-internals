#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 0;

    // Ternary operator
    // condition ? true : false
    int c = a > b ? a : b;
    printf("c = %d\n", c);

    int d = a < b ? a : b;
    printf("d = %d\n", d);

    printf("The number %d is %s.\n", a, a % 2 == 0 ? "even" : "odd");

    return 0;
}