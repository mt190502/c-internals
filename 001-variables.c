#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    // char: 1 byte (-128 to 127)
    char c = 'A';

    // bool: 1 byte (0 to 1)
    bool b = true;

    // int: 4 bytes (-2,147,483,648 to 2,147,483,647)
    int x = 1;

    // float: 4 bytes (1.2E-38 to 3.4E+38)
    float y = 2.0;

    // double: 8 bytes (2.3E-308 to 1.7E+308)
    double z = 3.0;

    // char* (pointer): 8 bytes (64-bit system)
    char* s = "Hello, World!";

    printf("c (%2ld bytes): %c\n", sizeof(c), c);
    printf("b (%2ld bytes): %d\n", sizeof(b), b);
    printf("x (%2ld bytes): %d\n", sizeof(x), x);
    printf("y (%2ld bytes): %f\n", sizeof(y), y);
    printf("z (%2ld bytes): %f\n", sizeof(z), z);
    printf("s (%2ld bytes): %s\n", strlen(s), s);

    printf("========================================\n");

    for (int i = 0; i < 20; i++) {
        printf("%1$7i | %1$##11x | %1$##5o | %1$8d\n", i);
    }

    return 0;
}