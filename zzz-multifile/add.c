#include <stdio.h>

int add(size_t argc, int argv[]) {
    int sum = 0;
    for (size_t i = 0; i < argc; i++) {
        sum += argv[i];
    }
    return sum;
}