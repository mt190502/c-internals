#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
        if (i == 5) {
            goto end;
        }
    }

end:
    printf("i is %d\n", 5);
    return 0;
}