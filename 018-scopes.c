#include <stdio.h>

int main(void) {
    int a = 12;
    if (a == 12) {
        int b = 99;
        printf("%d %d\n", a, b);
    }
    printf("%d\n", a); // OK, we're still in a's scope
    // printf("%d\n", b); // ILLEGAL, out of b's scope

    printf("====================================\n");

    {
        int a = 99; 
        printf("%d\n", a); // 99
    }
    printf("%d\n", a); // 12

    return 0;
}