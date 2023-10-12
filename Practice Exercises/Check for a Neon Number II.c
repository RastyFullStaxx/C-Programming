#include <stdio.h>

int calculateSquare(int num) {
    return num * num;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isNeonNumber(int num) {
    int square = calculateSquare(num);
    return sumOfDigits(square) == num;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isNeonNumber(num))
        printf("%d is a Neon number.\n", num);
    else
        printf("%d is not a Neon number.\n", num);

    return 0;
}
