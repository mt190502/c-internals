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
    printf("a = %d\n", ++a);
    printf("a = %d\n", 5 + ++a);

    // post-increment
    printf("b = %d\n", b++);
    printf("b = %d\n", 5 + b++);

    return 0;
}