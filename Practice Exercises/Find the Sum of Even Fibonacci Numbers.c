#include <stdio.h>

int main() {
    int limit, a = 1, b = 2, sum = 0;

    printf("Enter the limit for Fibonacci numbers: ");
    scanf("%d", &limit);

    while (b <= limit) {
        if (b % 2 == 0) {
            sum += b;
        }
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    printf("Sum of even Fibonacci numbers up to %d: %d\n", limit, sum);

    return 0;
}
