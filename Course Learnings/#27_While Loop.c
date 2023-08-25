#include <stdio.h>
#include <string.h>

// while loop = repeats a section of code possibly unlimited times .
// WHILE some remains true
// a while loop might not execute at all

int main()
{

    char name[25];

    printf("What's your name? ");
    fgets(name, 25, stdin);                             //equivalent of scanf but it accepts white spaces
    name[strlen(name)-1] = '\0';
    printf("Hello %s", name);

    while(strlen(name) == 0)                            //while this condition remains true; it will execute the block of codes below forever
    {
        printf("TYPE YOUR NAME BASTARD!!!");
            printf("\nAgain, what's your name?: ");
            fgets(name, 25, stdin);                     //equivalent of scanf but it accepts white spaces
            name[strlen(name)-1] = '\0';
            printf("Hello %s", name);
    } 

    return 0;
}