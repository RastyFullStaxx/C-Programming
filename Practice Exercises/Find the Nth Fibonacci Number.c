#include <stdio.h>

int findNthFibonacci(int n) {
    if (n <= 1)
        return n;
    return findNthFibonacci(n - 1) + findNthFibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 0)
        printf("Fibonacci sequence is not defined for negative n.\n");
    else
        printf("The %dth Fibonacci number is %d.\n", n, findNthFibonacci(n));

    return 0;
}
