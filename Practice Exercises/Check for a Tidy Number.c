#include <stdio.h>
#include <stdbool>

bool isTidyNumber(int num) {
    int prevDigit = 10; // Initialize with a digit greater than 9

    while (num > 0) {
        int digit = num % 10;
        if (digit > prevDigit) {
            return false;
        }
        prevDigit = digit;
        num /= 10;
    }

    return true;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isTidyNumber(num))
        printf("%d is a Tidy number.\n", num);
    else
        printf("%d is not a Tidy number.\n", num);

    return 0;
}
