#include <stdio.h>
#include <stdbool.h>

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

int main() {
    int lower, upper, sum = 0;

    printf("Enter the lower and upper bounds: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers in the range %d to %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum of prime numbers in the range: %d\n", sum);

    return 0;
}
