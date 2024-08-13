#include <stdio.h>

int main(void) {
    int t = 10;
    int* u = &t;
    int** v = &u;
    int*** w = &v;
    int**** x = &w;
    int***** y = &x;
    int****** z = &y;

    printf("t: %d\n", t);
    printf("u: %p(u) -> %d\n", u, *u);
    printf("v: %p(u) -> %p(t) -> %d\n", v, *v, **v);
    printf("w: %p(v) -> %p(u) -> %p(t) -> %d\n", w, *w, **w, ***w);
    printf("x: %p(w) -> %p(v) -> %p(u) -> %p(t) -> %d\n", x, *x, **x, ***x, ****x);
    printf("y: %p(x) -> %p(w) -> %p(v) -> %p(u) -> %p(t) -> %d\n", y, *y, **y, ***y, ****y, *****y);
    printf("z: %p(y) -> %p(x) -> %p(w) -> %p(v) -> %p(u) -> %p(t) -> %d\n", z, *z, **z, ***z, ****z, *****z, ******z);
}