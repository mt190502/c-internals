#include <stdio.h>
#include <stdlib.h>

#define MAX_PASSENGERS 10

struct cabin_info {
    int num_windows;
    int o2_level;
};

struct passenger {
    char* name;
    int age;
};

struct spaceship {
    char* manufacturer;
    struct cabin_info cabin_inf;
    struct passenger passenger[MAX_PASSENGERS];
};

int main() {
    struct spaceship my_ship = {
        .manufacturer = "NASA",
        .cabin_inf = {
            .num_windows = 4,
            .o2_level = 21
        }
    };
    
    printf("Manufacturer: %s\n", my_ship.manufacturer);
    printf("Number of windows: %d\n", my_ship.cabin_inf.num_windows);
    printf("O2 level: %d\n", my_ship.cabin_inf.o2_level);

    printf("=====================================\n");

    struct passenger p1 = {
        .name = "Alice",
        .age = 25
    };

    struct passenger p2 = {
        .name = "Bob",
        .age = 30
    };

    my_ship.passenger[0] = p1;
    my_ship.passenger[1] = p2;

    printf("Passenger 1: %s, %d\n", my_ship.passenger[0].name, my_ship.passenger[0].age);
    printf("Passenger 2: %s, %d\n", my_ship.passenger[1].name, my_ship.passenger[1].age);

    printf("=====================================\n");

    struct {
        char* name;
        int age;
    } x, y, z;

    x.name = "Charlie";
    x.age = 35;

    y.name = "David";
    y.age = 40;

    z.name = "Eve";
    z.age = 45;

    printf("Passenger 3: %s, %d\n", x.name, x.age);
    printf("Passenger 4: %s, %d\n", y.name, y.age);
    printf("Passenger 5: %s, %d\n", z.name, z.age);

    printf("=====================================\n");

    struct node {
        int data;
        struct node* next;
    };
    
    struct node* head;

    head = malloc(sizeof(struct node));
    head->data = 11;
    head->next = malloc(sizeof(struct node));
    head->next->data = 22;
    head->next->next = malloc(sizeof(struct node));
    head->next->next->data = 33;
    
    for (struct node* current = head; current != NULL; current = current->next) {
        printf("%d\n", current->data);
    }    

    return 0;
}