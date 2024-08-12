#include <stddef.h>
#include <stdio.h>

int main(void) {
    int x = 10;
    
    void* p = &x; // p is a int pointer to x (void* is a generic pointer)

    *(int*)p = 20; // dereference p and assign 20 to x (using a cast to int*)

    printf("x: %p\n", p);
    printf("x: %p\n", (void*)p);
    printf("x: %d\n", *(int*)p);

    return 0;
}