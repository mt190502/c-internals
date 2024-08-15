#include <stdarg.h>
#include <stdio.h>

int add(int a, ...) {
    va_list args;
    va_start(args, a);
    int sum = a;
    int arg;
    while ((arg = va_arg(args, int)) != 0) {
        sum += arg;
    }
    va_end(args);
    return sum;
}

int main(void) {
    printf("%d\n", add(1, 2, 3, 4, 5, 0));
    return 0;
}