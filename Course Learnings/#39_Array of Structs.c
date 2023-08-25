#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[99];
    float gwa;
    
} students;


int main(){

    students stud1 = {"Nox", 1.0};
    students stud2 = {"Ras", 2.0};
    students stud3 = {"Raz", 3.0};
    students stud4 = {"Nems", 4.0};
    students stud5 = {"Noems", 5.0};

    students studentData[] = {stud1, stud2, stud3, stud4, stud5};

    for (int i=0;i<sizeof(studentData)/sizeof(studentData[0]);i++){
        printf("%-12s\t", studentData[i].name);
        printf("%.2f\n", studentData[i].gwa);
    } printf("\n\n\n");

    return 0;
}