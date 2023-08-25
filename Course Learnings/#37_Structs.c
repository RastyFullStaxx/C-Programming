#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};


int main()
{
    // struct - collection of related numbers (variables)
    //          they can ba of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Rasty");
    player1.score = 4;

    strcpy(player2.name, "Noemi");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);


    return 0;
}