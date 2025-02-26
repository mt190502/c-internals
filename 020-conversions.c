#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[10] = "1234";
    int atoi_var = atoi(s);
    float atof_var = atof(s);
    long int atol_var = atol(s);
    long long int atoll_var = atoll(s);

    printf("atoi_var: %d\n", atoi_var);
    printf("atof_var: %f\n", atof_var);
    printf("atol_var: %ld\n", atol_var);
    printf("atoll_var: %lld\n", atoll_var);

    printf("====================================\n");

    char* s2 = "1234";

    long int strtol_var = strtol(s2, NULL, 10);
    long long int strtoll_var = strtoll(s2, NULL, 10);
    unsigned long int strtoul_var = strtoul(s2, NULL, 10);
    unsigned long long int strtoull_var = strtoull(s2, NULL, 10);
    float strtof_var = strtof(s2, NULL);
    double strtod_var = strtod(s2, NULL);
    long double strtold_var = strtold(s2, NULL);

    printf("strtol_var: %ld\n", strtol_var);
    printf("strtoll_var: %lld\n", strtoll_var);
    printf("strtoul_var: %lu\n", strtoul_var);
    printf("strtoull_var: %llu\n", strtoull_var);
    printf("strtof_var: %f\n", strtof_var);
    printf("strtod_var: %f\n", strtod_var);
    printf("strtold_var: %Lf\n", strtold_var);

    printf("====================================\n");

    int s3 = 1234;
    void* ptr = &s3;
    int* ptr2 = (int*)ptr;
    printf("ptr2: %d\n", *ptr2);

    printf("====================================\n");

    const int s4 = 1234;
    long int s4_long = (long int)s4 + 10;

    return 0;
}