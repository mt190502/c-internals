#include <stdio.h>


enum numbers { 
    A = 1,
    B,
    C
};

enum {
    D = 3,
    E,
    F = 10,
    G,
    H = 4,
    I
};

enum {
    J = 3,
    K = 3,
    L = 3
};

enum {
    X,
    Y,
    Z
};

typedef enum {
    ZERO,
    ONE,
    TWO,
    THREE
} numbers2;

int main(void) {
    printf("A: %d - B: %d - C: %d\n", A, B, C);
    printf("X: %d - Y: %d - Z: %d\n", X, Y, Z);
    printf("D: %d - E: %d - F: %d - G: %d - H: %d - I: %d\n", D, E, F, G, H, I);
    printf("J: %d - K: %d - L: %d\n", J, K, L);

    enum numbers n = A;
    printf("n: %d\n", n);

    numbers2 n2 = TWO;
    printf("n2: %d\n", n2);

    return 0;
}