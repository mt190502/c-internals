#include <stdio.h>
#include <stdint.h> 
#include <inttypes.h> 

int main(void) {
    int x = 10;
    const int y = 20;
    int z = 30;

    int* ptr = &x;

    //          +----------> integer pointer
    //          |      +---> const integer pointer address
    //          |      |
    //         vvv    vvv
    const int* ptr2 = &y;
    int* const ptr3 = &z;
    //         ^^^    ^^^
    //          |      |
    //          |      +---> integer pointer address
    //          +----------> constant pointer

    printf("x: %p -> %d\n", &ptr[0], *ptr);
    printf("y: %p -> %d\n", &ptr2[0], *ptr2);
    printf("z: %p -> %d\n", &ptr3[0], *ptr3);

    (*ptr)++;
    (ptr2)++;  // if (*ptr2)++; is used, it will throw an error because it is a constant value
    (*ptr3)++; // if (ptr3)++; is used, it will throw an error because it is a constant pointer

    printf("x: %p -> %d\n", &ptr[0], *ptr);
    printf("y: %p -> %d\n", &ptr2[0], *ptr2);
    printf("z: %p -> %d\n", &ptr3[0], *ptr3);

    printf("====================================\n");

    // restrict: restrict keyword is used to indicate that a pointer is the only pointer that will access the data it points to.
    int* restrict ptr4 = &x;
    printf("x: %p -> %d\n", &ptr4[0], *ptr4);

    printf("====================================\n");

    // volatile: volatile keyword is used to indicate that a variable's value can be changed by something outside the scope of the program.
    volatile int v = 10;
    int* ptr5 = &v;
    printf("v: %p -> %d\n", &ptr5[0], *ptr5);

    printf("====================================\n");

    // register: register keyword is used to define local variables that should be stored in a register instead of RAM.
    register int r = 10;
    printf("r: %p -> %d\n", r, r);

    printf("====================================\n");

    // static: static keyword is used to declare a variable that is to be shared among all instances of a class.
    static int s = 10;
    printf("s: %p -> %d\n", &s, s);

    printf("====================================\n");

    // extern: extern keyword is used to declare a global variable that is defined in another file.
    extern int e;

    return 0;
}