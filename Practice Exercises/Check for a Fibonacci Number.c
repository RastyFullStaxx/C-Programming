#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isPerfectSquare(int num) {
    int squareRoot = (int)sqrt(num);
    return squareRoot * squareRoot == num;
}

bool isFibonacciNumber(int num) {
    return isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isFibonacciNumber(num))
        printf("%d is a Fibonacci number.\n", num);
    else
        printf("%d is not a Fibonacci number.\n", num);

    return 0;
}
