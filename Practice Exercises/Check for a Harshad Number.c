#include <stdio.h>
#include <stdbool>

bool isHarshadNumber(int num) {
    int sumOfDigits = 0;
    int originalNum = num;

    while (num > 0) {
        sumOfDigits += num % 10;
        num /= 10;
    }

    return (originalNum % sumOfDigits) == 0;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isHarshadNumber(num))
        printf("%d is a Harshad number.\n", num);
    else
        printf("%d is not a Harshad number.\n", num);

    return 0;
}
