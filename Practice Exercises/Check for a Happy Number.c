#include <stdio.h>
#include <stdbool>

int sumOfSquaresOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappyNumber(int num) {
    int slow = num;
    int fast = num;

    do {
        slow = sumOfSquaresOfDigits(slow);
        fast = sumOfSquaresOfDigits(sumOfSquaresOfDigits(fast));
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isHappyNumber(num))
        printf("%d is a Happy number.\n", num);
    else
        printf("%d is not a Happy number.\n", num);

    return 0;
}
