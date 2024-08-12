#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 0;

    printf("condition (a == b): %s\n", a == b ? "true": "false");
    printf("condition (a != b): %s\n", a != b ? "true": "false");
    printf("condition (a  > b): %s\n", a  > b ? "true": "false");
    printf("condition (a <  b): %s\n", a <  b ? "true": "false");
    printf("condition (a >= b): %s\n", a >= b ? "true": "false");
    printf("condition (a <= b): %s\n", a <= b ? "true": "false");

    if (!(a == 1)) {
        printf("condition (a == 1 && b == 0): true\n");
    } else {
        printf("condition (a == 1 && b == 0): false\n");
    }
    
    return 0;
}