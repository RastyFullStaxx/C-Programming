#include <stdio.h>
#include <stdbool>

bool isPerfectNumber(int num) {
    int sum = 1; // Initialize with 1 (as all numbers are divisible by 1)

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPerfectNumber(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is not a Perfect number.\n", num);

    return 0;
}
