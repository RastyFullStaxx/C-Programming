#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Sum is not defined for non-positive n.\n");
    else {
        for (int i = 2; i <= n; i += 2) {
            sum += i;
        }
        printf("Sum of even numbers from 2 to %d: %d\n", n, sum);
    }

    return 0;
}
