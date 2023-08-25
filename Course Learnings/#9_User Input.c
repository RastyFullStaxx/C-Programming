#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];
    int age;

    printf("Tell me your name? ");
    //scanf("%s", &name);

    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHello %s, how are you? ", name);  

    char response[25];
    scanf("%s", &response);

    printf("\nGlad you are %s!\t", response);

    printf("how old are u na ba? ");
    scanf("%d", &age);

    printf("\nYou are %d years old", age);
    return 0;
}