#include <stdio.h>
#include <string.h>

int strlen_cst(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main(void) {
    char* str = "Hello, World! 1";
    printf("(%2zu) %s\n", strlen(str), str);

    printf("====================================\n");

    char str2[] = "Hello, World! 2";
    printf("(%2zu) %s\n", strlen(str2), str2);

    printf("====================================\n");

    char str3[16] = "Hello, World! 3";
    printf("(%2d) %s\n", strlen_cst(str3), str3);

    printf("====================================\n");

    char str4[16] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', ' ', '4'};
    printf("(%2d) %s\n", strlen_cst(str4), str4);

    printf("====================================\n");

    char str5[] = "Hello, World! 5";
    char* copy;
    copy = str5;
    copy[7] = '\0';
    printf("(%2d) %s\n", strlen_cst(str5), str5);

    printf("====================================\n");

    char str6[] = "Hello, World! 6";
    char copy2[16];
    strcpy(copy2, str6);
    copy2[7] = '\0';
    printf("(%2d) %s\n", strlen_cst(str6), str6);
    printf("(%2d) %s\n", strlen_cst(copy2), copy2);

    return 0;
}