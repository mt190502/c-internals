#include <stdio.h>

int main(void) {
    int x = 10, y = 20, z = 30;
    int a = (100, 200, 300);

    printf("a = %d\n", a);  // 30 because the last value is assigned to a

    return 0;
}