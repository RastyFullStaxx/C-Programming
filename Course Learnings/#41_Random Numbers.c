#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <string.h>
#include <ctype.h>

int main(){

    // pseudo numbers = a set of valeus or elements that are statiscally random
    //                  (Don't usethem for any sort of cryptographic security)
    //                  0 - 32,767

    srand(time(0));

    int seedProducednumber = (rand() % 6) +1;
    char dice[123];

    printf("Roll your dice and see what you've got!");
    
    while (1){
        fgets(dice, sizeof(dice), stdin);

        if (isspace(dice[0])){
            printf("\n================");
            printf("\nYou got the \"%d\"\n", seedProducednumber);
            printf("================\n");
            break;
        } else {
             printf("\nThat's no way to roll a dice man\nTry Again! Just hit enter\n");
        }
    } 

    if (seedProducednumber >= 5){
        printf("\nWe got a winner of %d mwap2x!!\n\n", seedProducednumber);
    } else {;
        printf ("Loser  takes nothing dHude...\n\n\n\n");
    }

    return 0;
}