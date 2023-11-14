#include <stdio.h>
#include <stdlib.h>

struct Person {
    char* name;
    int age;
};

int main() {
    struct Person* person = (struct Person*)malloc(sizeof(struct Person));

    printf("Enter name: ");
    scanf("%ms", &(person->name));

    printf("Enter age: ");
    scanf("%d", &(person->age));

    printf("Person: %s, Age: %d\n", person->name, person->age);

    free(person->name);
    free(person);
    return 0;
}
