#include <stdio.h>

typedef int custom_int_t;

typedef int custom_arr_t[10];

typedef struct animal {
    char name[20];
    int age;
} animal_t;

int main(void) {
    custom_int_t a = 10;
    printf("a: %d\n", a);

    printf("====================================\n");

    animal_t dog = {"Dog", 5};
    printf("Dog: %s, %d\n", dog.name, dog.age);

    printf("====================================\n");

    custom_arr_t arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}