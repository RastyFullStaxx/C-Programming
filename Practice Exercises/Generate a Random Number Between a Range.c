#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower, upper, randomNum;

    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);

    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    srand(time(0));
    randomNum = (rand() % (upper - lower + 1)) + lower;

    printf("Random number between %d and %d: %d\n", lower, upper, randomNum);

    return 0;
}
