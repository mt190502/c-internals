#include <stdio.h>

int main(void) {
    int fruit = 1;

    switch (fruit) {
        case 1:
            printf("Apple\n");
            break;
        case 2:
            printf("Banana\n");
            break;
        case 3:
            printf("Cherry\n");
            break;
        default:
            printf("Invalid fruit\n");
    }

    return 0;
}