#include <stdio.h>
#include <stdbool>

bool isAbundantNumber(int num) {
    int sum = 1; // Initialize with 1 (as all numbers are divisible by 1)

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum > num;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isAbundantNumber(num))
        printf("%d is an Abundant number.\n", num);
    else
        printf("%d is not an Abundant number.\n", num);

    return 0;
}
