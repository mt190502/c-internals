#include <stdio.h>
#include <string.h>

int strlen_cst(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];

    printf("arr: %p -> %d\n", (void*)arr, *arr);
    printf("ptr: %p -> %d\n", (void*)ptr, *ptr);
    ptr++;
    printf("ptr: %p -> %d\n", (void*)ptr, *ptr);
    printf("ptr: %p -> %d\n", (void*)ptr, *(ptr + 1));

    while (*ptr != 5) {
        printf("wptr: %p -> %d\n", (void*)ptr, *ptr);
        ptr++;
    }

    printf("====================================\n");

    printf("str (%2d): %s\n", strlen_cst("Hello"), "Hello");

    printf("====================================\n");

    char str[] = "Hello";
    char t[100];

    memccpy(t, str, '\0', strlen(str) + 1);

    printf("str (%2d): %s\n", strlen_cst(t), t);


    return 0;
}