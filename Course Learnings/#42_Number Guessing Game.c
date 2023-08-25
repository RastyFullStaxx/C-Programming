#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    const int MIN = 1;
    const int MAX = 10;
    int guess;
    int guesses = 1;
    int answer;

    //uses current time as seed
    srand(time(0));

    //generate a random number between min and max
    answer = rand() % MAX + MIN;

    printf("\n**********************");
    printf("\n NUMBER GUESSING GAME");
    printf("\n**********************");

    printf("\n\nready?\nstart..");

    printf("\n\nWhat's your guess? ");
    scanf(" %d", &guess);

    do {
        printf("\nCare to try again? ");
        scanf(" %d", &guess);

        if (guess > answer) {
            printf("\nToo high!");
        } else if (guess < answer){
            printf("\nToo low!");
        } else {
            printf("\nCorrect!!\n");
        }
        guesses++;

    } while (guess != answer);

    printf("\n========================");
    printf("\nThe Correct Answer: %d", answer);
    printf("\nThe number of guesses: %d", guesses);
    printf("\n========================\n\n\n\n");

    return 0;
}