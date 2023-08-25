#include <stdio.h>
#include <ctype.h>

int main()
{

    char questions[][100] = {"1. What's my favorite sex position?: ",
                             "2. Shall I practice risky or safe?: ",
                             "3. Do I prefer hard or rough?: "};

    char options[][100] = {"a. makitang masaya ka", "b. doggy", "c. missionary", "d. wheelborrow",
                           "a. risky", "b. efas", "c. safe", "d. saks lang",
                           "a. uGh rough", "b. super rough", "c. roughly hardcore", "d. wag nalang kung hindi rough"};

    char answers[3] = {'B', 'B', 'A'};
    int numofQues = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    printf("\n=============================");
    printf("\n QUIZ OF THE ANCIENT PEOPLE");
    printf("\n=============================\n");

    for (int i=0;i<numofQues;i++){
        printf("\n%s", questions[i]);
     for (int j=(i*4);j<(i*4)+4;j++){
        printf("\n%s", options[j]);
        }

    printf("\n\nYour answer: ");
    scanf(" %c", &guess); 
    guess = toupper(guess);

    if (guess == answers[i]){
        printf("OMSIM\n");
        score++;
    } else {
        printf("tanginamo mo mali\n");
        printf("Correct: %c\n", answers[i]);
        }
    }

    printf("\n=============================");
    printf("\nFINAL SCORE %d/%d\n", score, numofQues);
    printf("=============================");
    
    if (score == 3){
        printf("\nGood job man <333");
    } else {
        printf("\nTanginamo bob0 ka pa");
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}