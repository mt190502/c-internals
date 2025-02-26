#include <stdio.h>

int main(void) {
    FILE* file;
    file = fopen("999-attachment.txt",
                 "r+");  // a - append, w - write, r - read, r+ - read and write

    printf("====================================\n");

    int first_char = fgetc(file);
    printf("First char: %c\n", first_char);

    printf("====================================\n");

    int lines = 1;
    int next_char = fgetc(file);
    while (next_char != EOF) {
        if (next_char == '\n') {
            lines++;
        }
        printf("%c", next_char);
        next_char = fgetc(file);
    }
    printf("Lines: %d\n", lines);
    fclose(file);

    printf("====================================\n");
    FILE* file2 = fopen("999-employees.txt", "r+");
    char name[10], job[10];
    int age;
    float salary;
    while (fscanf(file2, "%s %d %f %s", name, &age, &salary, job) != EOF) {
        printf("Name: %s\nAge: %d\nSalary: %.2f\nJob: %s\n=====\n", name, age, salary, job);
    }
    fclose(file2);

    printf("====================================\n");

    FILE* file3 = fopen("temp.txt", "w+");
    fputc('A', file3);
    fputc('\n', file3);
    fputc('B', file3);
    fprintf(file, "\n%d\n", 10);
    fputs("Hello World!", file3);
    fclose(file3);

    return 0;
}