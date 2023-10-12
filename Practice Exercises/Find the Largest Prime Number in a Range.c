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

int findLargestPrime(int lower, int upper) {
    int largestPrime = 0;
    for (int i = upper; i >= lower; i--) {
        if (isPrime(i)) {
            largestPrime = i;
            break;
        }
    }
    return largestPrime;
}

int main() {
    int lower, upper;

    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);

    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    int largestPrime = findLargestPrime(lower, upper);

    if (largestPrime > 1)
        printf("The largest prime number in the range is: %d\n", largestPrime);
    else
        printf("No prime numbers in the given range.\n");

    return 0;
}
