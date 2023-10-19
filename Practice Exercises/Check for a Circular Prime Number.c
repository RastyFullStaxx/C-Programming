#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

bool isCircularPrime(int num) {
    if (num <= 1)
        return false;

    int n = num;
    int digits = (int)log10(num) + 1;

    for (int i = 0; i < digits; i++) {
        if (!isPrime(num))
            return false;

        int lastDigit = num % 10;
        int remainingNum = num / 10;
        num = (int)(lastDigit * pow(10, digits - 1) + remainingNum);
    }

    return true;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isCircularPrime(num))
        printf("%d is a Circular Prime number.\n", num);
    else
        printf("%d is not a Circular Prime number.\n", num);

    return 0;
}
