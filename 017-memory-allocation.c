#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        return 1;
    }
    printf("before: %p -> %d\n", (void*)ptr, *ptr);
    *ptr = 5;
    printf("ptr: %p -> %d\n", (void*)ptr, *ptr);
    free(ptr);
    printf("ptr: %p -> %d\n", (void*)ptr, *ptr);

    printf("====================================\n");

    int *ptr2 = (int*)calloc(10, sizeof(int));
    if (ptr2 == NULL) {
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        *(ptr2 + i) = i * 10;
        printf("ptr2[%d]: %d\n", i, ptr2[i]);
    }
    free(ptr2);

    return 0;
}