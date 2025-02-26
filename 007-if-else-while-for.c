#include <stdio.h>

int main(void) {
    int a = 10, b = 20, c = 30;

    if ((a < b) && (b < c)) {
        printf("a is less than b and b is less than c\n");
    } else {
        printf("a is not less than b and b is not less than c\n");
    }

    printf("====================================\n");

    a = 10;
    b = 20;

    while (a < b) {
        printf("a: %d\n", a);
        a++;
    }

    printf("====================================\n");

    a = 10;
    b = 20;

    do {
        printf("a: %d\n", a);
        a--;
    } while ((0 < a) && (a < b));

    printf("====================================\n");

    for (int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }

    printf("====================================\n");

    while (1) {
        printf("Hello\n");
    }

    for (;;) {
        printf("Hello\n");
    }

    return 0;
}