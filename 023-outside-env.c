#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    strcpy(argv[0], "023-outside-env-but-argv0-is-modified");
    
    if (argv[1] == NULL) {
        printf("argument is not provided\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    printf("====================================\n");

    const char* env = getenv("XDG_SESSION_TYPE");
    if (env == NULL) {
        printf("XDG_SESSION_TYPE is not set\n");
        return EXIT_FAILURE;
    }
    printf("XDG_SESSION_TYPE: %s\n", env);

    printf("====================================\n");

    extern char** environ;

    for (int i = 0; environ[i] != NULL; i++) {
        printf("environ[%d]: %s\n", i, environ[i]);
    }

    return 0;
}