#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isHarshadNumberBaseNAdvanced(int num, int base) {
    if (num < base) {
        return (num % base) == 0;
    } else {
        int originalNum = num;
        int sumOfDigits = 0;

        while (num > 0) {
            sumOfDigits += num % base;
            num /= base;
        }

        return (originalNum % sumOfDigits) == 0;
    }
}

int main() {
    int num, base;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Enter the base for the number: ");
    scanf("%d", &base);

    if (isHarshadNumberBaseNAdvanced(num, base))
        printf("%d is a Harshad number in base %d (Advanced Version).\n", num, base);
    else
        printf("%d is not a Harshad number in base %d (Advanced Version).\n", num, base);

    return 0;
}
