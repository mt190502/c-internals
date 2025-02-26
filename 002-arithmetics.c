#include <stdio.h>

int main(void) {
    int a = 20;
    int b = 10;

    int c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    c = a * b;
    printf("a * b = %d\n", c);

    c = a / b;
    printf("a / b = %d\n", c);

    c = a % b;
    printf("a %% b = %d\n", c);

    // pre-increment
    printf("a = %d\n", ++a);      // a = 20 -> (21)
    printf("a = %d\n", 5 + ++a);  // a = 21 -> (22) + 5 = 27

    // post-increment
    printf("b = %d\n", b++);      // b = (10) -> 11
    printf("b = %d\n", 5 + b++);  // b = (11) + 5 = 16
    printf("b = %d\n", b);        // b = 12

    return 0;
}