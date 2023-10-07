#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, temp;

    if (n == 0)
        return a;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
