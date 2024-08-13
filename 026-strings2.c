#include <stdio.h>
#include <threads.h>

int main(void) {
    printf("\'A\' is %d\n", 'A');

    printf("=====================================\n");

    for (int i = 10; i >= 0; i--) {
        printf("\r%2d second%s...", i, i <= 1 ? "" : "s");

        fflush(stdout);

        thrd_sleep(&(struct timespec){.tv_sec = 1}, NULL);
    }

    printf("\rLift off!\n");

    printf("=====================================\n");

    printf("Test? %d\n", 'A' == 65);
    printf("Test??! %d\n", 'A' == 65);
    printf("Test\? %d\n", 'A' == 65);
    printf("Test\?\? %d\n", 'A' == 65);

    printf("=====================================\n");

    printf("A\102C\n");
    printf("\xE2\x80\xA2 Bullet 1\n");
    printf("\xE2\x80\xA2 Bullet 2\n");
    printf("\xE2\x80\xA2 Bullet 3\n");
}