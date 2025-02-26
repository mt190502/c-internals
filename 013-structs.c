#include <stdio.h>

struct employee {
    char name[50];
    int age;
    float salary;
};


void display_employee(struct employee *em) {
    printf("=== Employee ===\nName: %s\nAge: %d\nSalary: %.2f\n", em->name, em->age, em->salary);
}

int main(void) {
    struct employee employee;
    printf("Enter name: ");
    scanf("%s", employee.name);
    printf("Enter age: ");
    scanf("%d", &employee.age);
    printf("Enter salary: ");
    scanf("%f", &employee.salary);

    display_employee(&employee);

    printf("====================================\n");

    struct employee employee2 = {"John Doe", 30, 1000.00};
    display_employee(&employee2);

    printf("====================================\n");

    struct employee employee3 = {.age = 25, .name = "Jane Doe", .salary = 2000.00};
    display_employee(&employee3);

    return 0;
}