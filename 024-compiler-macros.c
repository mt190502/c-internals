#include <stdio.h>

#define TEST_MODE 1

#ifndef TEST_MODE
#error "TEST_MODE is not defined"
#endif

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((a) / (b))
#define MOD(a, b) ((a) % (b))
#define POW(a, b) ((a) ^ (b))

#define X(...) #__VA_ARGS__
#define STR(x) #x

#define PRINT_NUMS_TO_PRODUCT(a, b)         \
    do {                                    \
        int product = (a) * (b);            \
        for (int i = 0; i < product; i++) { \
            printf("%d\n", i);              \
        }                                   \
    } while (0)

#define PI 3.14159265358979323846

int main() {
#if TEST_MODE
    printf("This function: %s\n", __func__);
    printf("This file: %s\n", __FILE__);
    printf("This line: %d\n", __LINE__);
    printf("Compiled on: %s %s\n", __DATE__, __TIME__);
    printf("C Version: %ld\n", __STDC_VERSION__);
    printf("X: %d\n", X(1, 2, 3, 4, 5));
    printf("STR: %s\n", STR(123));
    PRINT_NUMS_TO_PRODUCT(2, 3);
#else
    printf("ADD(1, 2): %d\n", ADD(1, 2));
    printf("SUB(1, 2): %d\n", SUB(1, 2));
    printf("MUL(1, 2): %d\n", MUL(1, 2));
    printf("DIV(1, 2): %d\n", DIV(1, 2));
    printf("MOD(1, 2): %d\n", MOD(1, 2));
    printf("POW(1, 2): %d\n", POW(1, 2));
#endif
    printf("TEST_MODE: %d\n", TEST_MODE);
#undef TEST_MODE

    printf("PI: %f\n", PI);
    return 0;
}