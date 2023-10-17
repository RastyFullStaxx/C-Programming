#include <stdio.h>
#include <stdbool>
#include <math.h>

bool isArmstrongNumber(int num) {
    int originalNum = num;
    int n = 0;
    int sum = 0;

    while (num > 0) {
        num /= 10;
        n++;
    }

    num = originalNum;

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

    if (isArmstrongNumber(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
