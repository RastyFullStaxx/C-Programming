#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isPerfectSquare(int num) {
    int squareRoot = (int)sqrt(num);
    return squareRoot * squareRoot == num;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPerfectSquare(num))
        printf("%d is a perfect square number.\n", num);
    else
        printf("%d is not a perfect square number.\n", num);

    return 0;
}
