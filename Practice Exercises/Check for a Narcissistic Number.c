#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isNarcissisticNumber(int num) {
    int originalNum = num;
    int n = (int)log10(num) + 1;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isNarcissisticNumber(num))
        printf("%d is a Narcissistic number.\n", num);
    else
        printf("%d is not a Narcissistic number.\n", num);

    return 0;
}
