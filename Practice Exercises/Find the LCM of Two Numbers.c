#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return findGCD(b, a % b);
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int lcm =
