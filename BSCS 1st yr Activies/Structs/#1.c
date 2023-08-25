#include <stdio.h>
#include <string.h>

struct studentRecord {
    int studentID;
    char firstName[50];
    char lastName[50];
    int totalUnitsCompleted;
    float accumulatedGPA;
};

int main() {

    struct studentRecord student;

    student.studentID = 213321;
    strcpy(student.firstName, "Rasty");
    strcpy(student.lastName, "Esparsszs");
    student.totalUnitsCompleted = 200;
    student.accumulatedGPA = 1.00;

    printf("==============================\n");
    printf("\nStudent Record:\n");
    printf("Student ID: %d\n", student.studentID);
    printf("First Name: %s\n", student.firstName);
    printf("Last Name: %s\n", student.lastName);
    printf("Total Units Completed: %d\n", student.totalUnitsCompleted);
    printf("Accumulated GPA: %.2f\n", student.accumulatedGPA);
    printf("\n==============================");
    printf("\n\n\n\n");

    return 0;
}
