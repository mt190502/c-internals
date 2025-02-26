#include <stdint.h>
#include <stdio.h>

void sqrt_cst(int a) { printf("sqrt_cst: %d\n", a * a); }

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

    printf("=====================================\n");

    int a = 10;
    int* const p = &a;
    int* const* q = &p;
    int* const** r = &q;
    printf("a: %d\n", a);
    printf("p: %p(a) -> %d\n", p, *p);
    printf("q: %p(p) -> %p(a) -> %d\n", q, *q, **q);
    printf("r: %p(q) -> %p(p) -> %p(a) -> %d\n", r, *r, **r, ***r);

    printf("=====================================\n");

    int b = 10;
    int* const c = &b;
    const int* d = &b;
    (*c)++;
    d++;
    printf("b: %d\n", b);
    printf("c: %p(b) -> %d\n", c, *c);

    printf("=====================================\n");

    void (*f)(int) = sqrt_cst;
    f(10);
}