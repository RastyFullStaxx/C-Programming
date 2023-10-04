#include <stdio.h>

int factorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int isStrongNumber(int num) {
    int originalNum, digit, sum = 0;

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isStrongNumber(num))
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}
