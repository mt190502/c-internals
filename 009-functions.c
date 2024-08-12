#include <stdio.h>

int add(int argc, int* argv) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        sum += argv[i];
    }
    return sum;
}

int main(void) {
    int x[] = {10, 20, 30, 40, 50, 100, 200, 1000};
    int z = add(sizeof(x) / sizeof(int), x);

    printf("z = %d\n", z); 

    return 0;
}