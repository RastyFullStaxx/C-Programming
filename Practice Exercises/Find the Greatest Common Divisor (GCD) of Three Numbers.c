#include <stdio.h>

int findGCD(int a, int b, int c) {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b && i <= c; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int gcd = findGCD(num1, num2, num3);

    printf("GCD of %d, %d, and %d is %d\n", num1, num2, num3, gcd);

    return 0;
}
