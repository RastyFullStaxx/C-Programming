#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Sum is not defined for negative numbers.\n");
    else
        printf("Sum of the first %d natural numbers: %d\n", num, sumOfNaturalNumbers(num));

    return 0;
}
