#include <stdio.h>
#include <stdbool.h>

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int primeFactorsSum(int num) {
    int sum = 0;
    int n = num;

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            sum += sumOfDigits(i);
            n /= i;
        }
    }

    if (n > 1) {
        sum += sumOfDigits(n);
    }

    return sum;
}

bool isSmithNumber(int num) {
    return sumOfDigits(num) == primeFactorsSum(num);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isSmithNumber(num))
        printf("%d is a Smith number.\n", num);
    else
        printf("%d is not a Smith number.\n", num);

    return 0;
}
