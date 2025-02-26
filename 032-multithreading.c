#include <stdio.h>
#include <stdlib.h>
#include <threads.h>

#define THREAD_COUNT 4

int run(void* arg) {
    int p = *(int*)arg;
    free(arg);
    printf("THREAD: Hello from thread! p = %d\n", p);
    return p;
}

int main(void) {
    thrd_t thread[THREAD_COUNT];

    printf("MAIN: Launching %d threads...\n", THREAD_COUNT);
    for (int i = 0; i < THREAD_COUNT; i++) {
        int* arg = malloc(sizeof *arg);
        *arg = i;
        thrd_create(thread + i, run, arg);
    }

    printf("MAIN: Waiting for threads to finish...\n");
    for (int i = 0; i < THREAD_COUNT; i++) {
        int result;
        thrd_join(thread[i], &result);
        printf("MAIN: Thread %d returned %d\n", i, result);
    }

    return 0;
}