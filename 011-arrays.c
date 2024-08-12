#include <stdio.h>

int add_all_elements(int argc, int* arr) {
     int sum = 0;

    for (int i = 0; i < argc; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(void) {
    int i;
    float f[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    for (i = 0; i < 4; i++) {
        printf("f[%d] = %f\n", i, f[i]);
    }

    printf("%lu bytes: %lu elements\n", sizeof(f), sizeof(f) / sizeof(f[0]));

    printf("====================================\n");

    int arr[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
                        {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}};

    size_t x = sizeof(arr) / sizeof(arr[0]);
    size_t y = sizeof(arr[0]) / sizeof(arr[0][0]);
    size_t z = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);

    printf("%lu bytes: (%lu x %lu x %lu) x int\n", sizeof(arr), x, y, z);

    for (size_t i = 0; i < x; i++) {
        for (size_t j = 0; j < y; j++) {
            for (size_t k = 0; k < z; k++) {
                printf("arr[%lu][%lu][%lu] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    printf("====================================\n");

    int arr2[5] = {12, 2, 3, 4, 5};
    int *p = arr2;

    printf("%i\n", p[0]);
    printf("%i\n", *(p + 0));

    printf("====================================\n");

    int arr3[5] = {1, 2, 3, 4, 5};
    int sum = add_all_elements(sizeof(arr3) / sizeof(int), arr3);
    printf("%p - %p - %p\n", arr3, &arr3, (arr3 + 0));
    printf("Sum of all elements: %d\n", sum);
}