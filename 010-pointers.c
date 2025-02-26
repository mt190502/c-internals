#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 20;

    int* p = &x;    // p is a int pointer to x (void* is a generic pointer)
    int** q = &p;   // q is a pointer to a pointer to x
    int*** r = &q;  // r is a pointer to a pointer to a pointer to x
    void* v = &x;   // v is a generic pointer to x

    *(int*)v = 20;  // dereference p and assign 20 to x (using a cast to int*)

    printf("x: %ls\n", p);
    printf("x: %p\n", (void*)v);
    printf("x: %d\n", *(int*)v);

    return 0;
}