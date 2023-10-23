#include <stdio.h>

int main() {
    int n, num, evenSum = 0, oddSum = 0;

    printf("Enter the total number of integers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }

    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
